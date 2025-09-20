#include <stdio.h>
#include <time.h>

// check if any num is the same:
int check(int arr[], int count, int num)
{
    if (arr[count] == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    // produce 10 different nums

    int arr[10];
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        //生成一个随机数，假设此时为i=0
        int num = rand()%100 + 1;
        
        int a = 0;
        //检查与前面的有没有重复
        for(int i = 0;i < count + 1;i++)
        {
            if(!check(arr,count,num))
            {
                a++;
            }
        }
        if(a == count)
        {
            arr[count] == num;
        }
        count ++;
    }

    return 0;
}
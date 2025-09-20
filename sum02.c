#include<stdio.h>
#include<time.h>

//check if any num is the same:
int check(int num1,int num2)
{
    if(num1 == num2)
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
    //produce 10 different nums

    srand((unsigned int)time(NULL));
    int arr[10];
    for(int i = 0;i < 10;i++)
    {
        arr[i] = rand()%100 + 1;
    }
    for(int i = 0;i < 10;i++)
    {
        for(int j = i + 1;j < 10;j++)
        {
            if(check(arr[i],arr[j]) == 1)
            {
                arr[j] = rand()%100 + 1;
                printf("there are same nums");
            }
        }
    }

    return 0;
}
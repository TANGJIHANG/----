#include <stdio.h>
#include <time.h>

// check if any num is the same:
int check(int num[], int arr[], int count)
// count代表了num口号中的编号
{
    int a = 0;
    for (int i = 0; i < count; i++)
    {
        if (num[count] == arr[i])
        {
            a++;
        }
    }
    return a;
}

int main()
{
    srand((unsigned int)time(NULL));
    // produce 10 different nums

    // 先生成
    // 判断成功后，把它存入数组
    int num[10];
    int arr[10];
    arr[0] = rand();
    // 第一个数不可能重复
    // 第二个数需要判断


    for (int i = 1; i < 10; i++)
    {
        do
        {
            num[i] = rand();
            arr[i] = num[i];
        } while (num, arr, i);
    }

    for(int i = 0;i < 10; i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}
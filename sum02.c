#include <stdio.h>
#include <time.h>

// check if any num is the same:
int exist(int arr[], int count, int num)
{
    for (int i = 0; i < count; i++)
    {
        if (num == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    srand((unsigned int)time(NULL));
    int arr[10];
    for(int i = 0;i < 10;i++)
    {
        int num = rand()%100 + 1;
        while(!exist(arr,i,num))
        {
            arr[i] = num;
        }
    }
    for(int i = 0;i < 10;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}
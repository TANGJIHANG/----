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

// get the average number
int average(int arr[])
{
    double sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    double aver = sum / 10;
    printf("the average of this array is: %d\n", aver);
    return aver;
}

//count how many nums are lower than the average?
int count(int arr[],int average)
{
    int countNum = 0;
    for(int i = 0;i < 10;i ++)
    {
        if(arr[i] < average)
        {
            countNum ++;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        int num = 0;
        do
        {
            num = rand() % 100 + 1;
            printf("wowowowo%d\n", num);
        } while (exist(arr, i, num));
        arr[i] = num;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    average(arr);

    count(arr,average(arr));
    
    return 0;
}
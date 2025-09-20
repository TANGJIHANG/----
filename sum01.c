#include<stdio.h>
#include<time.h>

int main()
{
    srand((unsigned int)time(NULL));
    int arr[10];
    for(int i = 0;i < 10;i++)
    {
        arr[i] = rand()%100 + 1;
        printf("%d\n",arr[i]);
    }
    int sum = 0;
    for(int j = 0;j < 10;j++)
    {
        sum += arr[j];
    }
    printf("%d\n",sum);
    return 0;
}
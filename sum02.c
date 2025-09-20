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
    srand((unsigned int)time(NULL));
    //produce 10 different nums


    //先生成
    //判断成功后，把它存入数组
    int arr[10];
    arr[0] = rand();
    //第一个数不可能重复
    //第二个数需要判断
    
    do
    {
        int num1 = rand();
        arr[1] = num1;
    }while(check(arr[1],arr[0]));
    //当while括号中为0是可以停止，

    //第三个数
    do
    {
        int num2 = rand();
        arr[2] = num2;
    }while(check(arr[2],arr[1]))
    //问题check函数要滚动循环




    return 0;
}
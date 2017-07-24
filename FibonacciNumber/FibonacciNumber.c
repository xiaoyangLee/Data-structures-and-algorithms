#include <stdio.h>

/*
 * 使用递归函数实现斐波那契数列0 1 1 2 3 5 8....
 * 斐波那契数列的递归定义为：
 * F(0)=0;F(1)=1;F(n)=F(n-1)+F(n-2) (n>=2,n属于N*)
 */
int Fibonacci(int n)
{
    if(n==0) 
        return 0; 
    if(n==1)
        return 1;
    if(n>1)
        return Fibonacci(n-1)+Fibonacci(n-2);//在n>=2的条件下，返回n-1和n-2的和。
}

int main()
{

    int i;//打印的第几个数，代表位置
    int n = 10;//定义要输出多少个数
    for(i=0;i<n;i++){
        //循环打印数列，用空格隔开
        printf("%d  ",Fibonacci(i));
    }
    return 0;
}

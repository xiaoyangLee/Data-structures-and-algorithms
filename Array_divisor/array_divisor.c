#include <stdio.h>
#include <string.h>
/**
 * DivArray()函数用于返回一个数组中所有元素被第一个元素除的结果
 * array[0]是除数，array[i]是被除数
 * 使用for循环来解决这个问题，但是要倒循环
 */
void DivArray(int *pArray,int size)
{
    //判断array[0]是否为0,如果为零则退出，否则继续。
    if(pArray[0]==0)
    {
        printf("Warining:数组首元素不得为0");
        return;
    }

    //要用倒循环，如果要用正循环的话第一个数会直接变成1,后续结果无法得出
    for(int i=size-1;i>=0;i--)
    {
        pArray[i]/=pArray[0];//求出相除的值并赋予pArray[size-1]
        printf("%d  ",pArray[i]);
    }
}

int main()
{
    int array[]={0,4,6,8,10,11,12};
    //求出数组长度,sizeof是运算符，strlen()是函数,多用于求字符数组，普通数组没有'\0' 结尾，使用strlen可能内存越界
    //sizeof求出的是总字节长度，sizeof(array)/sizeof(array[0])这样得到数组真实长度
    // int i = strlen(array);
    int i = sizeof(array)/sizeof(array[0]);
    DivArray(array,i);
    return 0;
}

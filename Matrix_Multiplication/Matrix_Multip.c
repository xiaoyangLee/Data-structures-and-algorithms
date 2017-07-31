#include <stdio.h>

/*
用于计算NxN的矩阵相乘
*/
void matrixMultip(int *a,int *b,int *c)
{
    int n = 2;
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",*a);
        }
        printf("\n");
        k = 0;
    }
}


int main()
{
    //定义数组a,b,c
    int a[2][2] = {
        {1,2},
        {1,2}
    };
    int b[2][2] = {
        {1,2},
        {1,2}
    };
    int c[2][2];
    matrixMultip(a,b,c);

}
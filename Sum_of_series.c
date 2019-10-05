#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    printf("Enter the size of series :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=(float)1/i;
        printf("1/%d",i);
        if(i<n)
        printf("+");
    }
    printf("=%f",sum);
    return 0;
}
// Output
// Enter the size of series :6
// 1/1+1/2+1/3+1/4+1/5+1/6=2.450000
#include<stdio.h>
int main()
{
    int fact=1,i;
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("\nFactorial of n number is %d",fact);
    return 0;
}
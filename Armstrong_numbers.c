#include<stdio.h>
void fun(int n)
{
    int sum=0,r,l;
    l=n;
    while(l>0)
    {
        r=l%10;
        sum=sum+r*r*r;
        l=l/10;
    }
    if(sum==n)
    printf("%d\t",n);
}
int main()
{
    int n;
    printf("Enter a number :");    //Find the Armstrong numbers upto n number
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        fun(i);
}
// Enter a number :1000
// 1       153     370     371     407
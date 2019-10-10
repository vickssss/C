#include<stdio.h>
int main()
{
    int a,b;      //2 number
    printf("Enter 2 number :");
    scanf("%d%d",&a,&b);
    int rem;
    rem=b%a;
    while(rem!=0)
    {
        b=a;
        a=rem;
        rem=b%a;
    }
    printf("Hcf of 2 number is %d",a);
}
// Enter 2 number :4
// 78
// 2
#include<stdio.h>
int main()
{
    int rem,n,rev=0;
    printf("Eenter a number :");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("\nReverse Number is %d ",rev);
    return 0;
}
// Output
// Eenter a number :451
// Reverse Number is 154
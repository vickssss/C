#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,upper,lower;
    printf("Enter lower and upper number :");
    scanf("%d%d",&lower,&upper);
    n=(rand()%(upper-lower+1))-lower;
    printf("Randam of between %d to %d is %d",lower,upper,n);
}
// Enter lower and upper number :5
// 98
// Randam of between 5 to 98 is 36
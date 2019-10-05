#include<stdio.h>
int main()
{
    int a[5],i;
    int max,min;
    printf("Enter 5 number in array :");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    min=a[0];
    max=a[0];
    for(i=1;i<5;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(i=1;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\nMaximum number of given array is %d \nMinimum number of given array is %d ",max,min);
    return 0;
}
//Output
// Enter 5 number in array :78
// 45
// 12
// 89
// 51

// Maximum number of given array is 89
// Minimum number of given array is 12
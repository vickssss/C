#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][100];
    int i,j;
    printf("Enter 5 string :");
    for(i=0;i<=4;i++)
    {
        gets(a[i]);
    }
    printf("\nString are :\n");
    for(i=0;i<5;i++)
    {
        printf("%s\n",a[i]);
    }
}
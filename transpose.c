#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter number of row :");
    scanf("%d",&n);
    printf("\nEnter number of column :");
    scanf("%d",&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",a[j][i]);
        printf("\n");
    }
}
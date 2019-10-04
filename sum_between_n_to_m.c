#include<stdio.h>
int main()
{
    int n,m,i;
    printf("Enter n and m number :");
    scanf("%d%d",&n,&m);
    int sum=0;
    if(n<m)
    {
        for(i=n;i<=m;i++)
        {
            sum+=i;
            printf("%d",i);
            if(i<m)
            printf("+");
            else if(i==m)
            printf("=");
        }
    }
    else
    printf("\nSomething went wrong!");
    printf("%d",sum);
}
//Output
// Enter n and m number :3
// 5
// 3+4+5=12
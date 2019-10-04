#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int i,table;
    for(i=1;i<=10;i++)
    {
        table=n*i;
        printf("\n%d*%d=%d",n,i,table);
    }
    return 0;
}
//Output
// Enter a number :7
// 7*1=7
// 7*2=14
// 7*3=21
// 7*4=28
// 7*5=35
// 7*6=42
// 7*7=49
// 7*8=56
// 7*9=63
// 7*10=70
#include<stdio.h>
int main()
{
    int a=-1,b=1,c=0;
    int n,l;
    printf("Enter a number for fibonacci up to n number :");
    scanf("%d",&n);
    while(l<=n)
    {
        
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        l=a+b;
    }
    return 0;
}
//Outpur
// Enter a number for fibonacci up to n number :7894
// 0       1       1       2       3       5       8       13      21      34      55      89      144     233     377     610     987     1597    2584
//         4181    6765
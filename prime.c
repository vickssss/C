#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        //int l=j;
        int temp=0;
        for(i=2;i<=sqrt(j);i++)
        {
            if(j%i==0)
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
        printf("%d\t",j);
    }
    return 0;
}
//Output
// Enter a number :100
// 1       2       3       5       7       11      13      17      19      23      29      31      37      41      43      47      53      59      61
//         67      71      73      79      83      89      97
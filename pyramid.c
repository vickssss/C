#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the size of pyramid :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        printf(" ");
        for(j=1;j<=(2*i-1);j++)
        printf("*");
        printf("\n");
    }
}
//Output
// Enter the size of pyramid :9
//         *
//        ***
//       *****
//      *******
//     *********
//    ***********
//   *************
//  ***************
// *****************
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("\nNumber  Square  Cube   Square Root");
    for(int i=1;i<=n;i++)
    printf("\n%d\t%d\t%d\t%.2f",i,i*i,i*i*i,sqrt(i));
}
// Enter a number :10

// Number  Square  Cube   Square Root
// 1       1       1       1.00
// 2       4       8       1.41
// 3       9       27      1.73
// 4       16      64      2.00
// 5       25      125     2.24
// 6       36      216     2.45
// 7       49      343     2.65
// 8       64      512     2.83
// 9       81      729     3.00
// 10      100     1000    3.16
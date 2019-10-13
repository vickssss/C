#include<stdio.h>
enum day {sun=1,mon,tue,wed,thu,fri,sat};
int main()
{
    int n;
    enum day d;
    printf("Enter a number :");
    scanf("%d",&n);
    d=n;
    if(sun==d || sat==d)
    printf("\nWeekend");
    else
    printf("\nWorking Day");
}
// Enter a number :1

// Weekend
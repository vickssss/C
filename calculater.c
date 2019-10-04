#include<stdio.h>
int main()
{
    int a,b;           //2 number
    int op;
    printf("Enter 2 number :");
    scanf("%d%d",&a,&b);
    start:
    printf("\nEnter choose option \n1.Add\n2.Subtract\n3.Multiply\n4.Division\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("\nAddition of 2 number is %d",(a+b));
        break;
        case 2:
        printf("\nSubtraction of 2 number is %d",(a-b));
        break;
        case 3:
        printf("\nMultiply of 2 number is %d ",(a*b));
        break;
        case 4:
        printf("\nDivision of 2 number is %d",(a/b));
        break;
        default:
        printf("\nSomething went wrong!");
        break;
    }
        printf("\nAgain Use \n1.Yes\n2.No\n");
        int oop;
        scanf("%d",&oop);
        if(oop==1)
        goto start;
        else
        {
            printf("\nThank You!");
        }
        
        return 0;
    
}
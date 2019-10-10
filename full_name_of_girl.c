#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int op;
    printf("Enter a girl name :");
    gets(a);
    printf("%s",a);
    printf("Is the girl married. \n1.yes \n2.No\n");
    scanf("%d",&op);
    if(op==1)
        printf("\nFull name of girl is Mrs. %s",a);
    else if(op==2)
        printf("\nFull name of girl is Miss. %s",a);
}
// Enter a girl name :Kajal
// KajalIs the girl married. 
// 1.yes
// 2.No
// 2

// Full name of girl is Miss. Kajal
#include<stdio.h>
int main()
{
    char a[100],op;
    int i=0,count=0;
    printf("Enter a string :");
    gets(a);
    printf("\nEnter character :");
    scanf("%c",&op);
    printf("\nIndex :");
    while(a[i]!='\0')
    {
        // printf("%c",a[i]);
        if(a[i]==op)
        {
            printf("%d\t",count);
            count++;
        }
        else
        {
            count++;
        }
        i++;
    }
}
// Enter a string :Shekhar kumar

// Enter character :k

// Index :3        8
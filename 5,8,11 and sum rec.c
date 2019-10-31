#include<stdio.h>
#include<conio.h>
void series(int a,int n,int i,int S)
{
	
	if(i<n)
	{
	printf("%d\n",a);
	series(a+3,n,i+1,S=S+a);
	}
	if(i==n)
	printf("\nSum %d",S);
}
main()
{
	int n,i=1,a=5,S=0;
	printf("Enter any term of the series ");
	scanf("%d",&n);
	series(a,n,i,S);
	getch();
}


#include<stdio.h>
#include<conio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("Enter 1 matrix");
	for(i=0;i<3;i++)
	{
		printf("\nEnter  %d row :",++i);
		i--;
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter 2 matrix");
		for(i=0;i<3;i++)
	{
		printf("\nEnter  %d row :",++i);
		i--;
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		c[i][j]=a[i][j]+b[i][j];
	}
	printf("\n Addition of two matrix :\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			printf("%d ",c[i][j]);
			printf("\n");
		}
		getch();
		return 0;
}

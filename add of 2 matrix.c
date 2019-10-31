#include<stdio.h>
#include<conio.h>
main()
{
	int a[3][3],i,j,d=0;
	printf("Enter 1 matrix");
	for(i=0;i<3;i++)
	{
		printf("\nEnter  %d row :",++i);
		i--;
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(a[i][j]==a[i][i] || a[i][j]==a[j][j])
		d=d+a[i][j];
	    }
	}
	printf("\Summation of diagonal element: %d",d);
	getch();
	return 0;
}

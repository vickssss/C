#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int i,j,n=1,l[20],v;
	char a[5][20],b[5][20];
    for(i=0;i<5;i++)
    {
    	printf("Enter %d name:",n);
    	gets(a[i]);
    	l[i]=strlen(a[i]);
    	n++;
	}
	n=1;
	for(i=0;i<5;i++)
	{
		strcpy(b[i],a[i]);
		strrev(a[i]);
		v=strcmp(a[i],b[i]);
		if(v==0)
		printf("\n%d name is palindrom",n);
	    if(v>0 || v<0)       
		printf("\n%d name is not palindrom",n);
		n++;
	}
	getch();
	return 0;
}

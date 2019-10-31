#include<stdio.h>
main(){
	int r,d,ar,l,b,s,ch,ch1;
	do{
	
	printf("\t\t\t\tMENU\n");
	printf("###############################################################\n\n");
	printf("1.circle\n");
	printf("2.rectangle\n");
	printf("3.square\n");
	printf("0..EXIT\n");
	printf("################################################################\n\n");
	printf("enter your choise ");
	scanf("%d",&ch);
	
	if(ch==1){
		printf("1.radius\n");
		printf("2.diameter\n");
		printf("enter your choise ");
		scanf("%d",&ch1);
		if(ch1==1){
			printf("enter radius ");
			scanf("%d",&r);
			ar=3.14*(r*r);
			printf("%d",ar);
		}
		else{
		printf("enter diameter ");
			scanf("%d",&d);
			ar=(3.14*(d*d))/4;
			printf("%d",ar);
		}
	}
	else if(ch==2){
		scanf("%d",&l);
		scanf("%d",&b);
		ar=l*b;
		printf("%d",ar);
    }
    else if(ch==3){
    	scanf("%d",&s);
    	ar=s*s;
    	printf("%d",ar);
	}
	
	
}while(ch!=0);
}

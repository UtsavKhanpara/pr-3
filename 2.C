#include<stdio.h>
#include<conio.h>

main()

{
	int  num;
	int  count =0;

	clrscr();

	printf("enter any number :");
	scanf("%d",&num);

	if(num<0)
	{
	    num=num;

	}


	do{

		count++;
		num/=10;


	}while(num>0);

	printf(	"total number of digits 	%d \n",count);

	getch();
}
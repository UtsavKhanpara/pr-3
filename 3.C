#include<stdio.h>
#include<conio.h>

main()

{
	int num,firstd,lastd,sum;

	clrscr();

	printf("enter any number :");
	scanf("%d",&num);

	//store last digit //123

	lastd=num%10 ;

	//find first digit

	while(num>=40)
	{
	      num/=10;
	}
	firstd=num;

	sum=firstd+lastd;

	printf("sum of first end last digits %d\n",sum);


	getch();

}






















































































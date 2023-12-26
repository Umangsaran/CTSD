		  #include<stdio.h>
#include<conio.h>

	void main()
{
	float a,b;
	int ch;
	printf("ENTER FIRST VALUE = \n");
	scanf("%f",&a);
	printf("ENTER SECOND VALUE = \n");
	scanf("%f",&b);
	printf("WHAT YOU WANT TO DO = \n");
	printf("1.SUM \n 2.SUBTRACT \n 3.MULTIPLICATION \n 4.DIVISION \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("ADDITION: %0.2f\n",a+b);
			break;
		case 2:printf("SUBTRACT : %0.2f\n",a-b);
			break;
		case 3:printf("MULTIPLICATION : %0.2f\n",a*b);
			break;
		case 4:printf("DIVISION : %0.2f\n",a/b);
			break;
		default:printf("not in range");
	    }
	getch();
	clrscr();
}
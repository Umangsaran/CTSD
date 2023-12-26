#include<stdio.h>
#include<conio.h>

	void main()
{
	float u,a,t,s,v;
	printf("TO CALCULATE THE DISTANCE \n");
	printf("ENTER VALUE OF ACCELERATION:\n");
	scanf("%f",&a);
	printf("ENTER THE VALUE OF INITIAL VELOCITY:\n");
	scanf("%f",&u);
	printf("ENTER TIME TAKEN:\n");
	scanf("%f",&t);
	v=u+(a*t);
	s=(u*t)+(0.5)*(a*t*t);
	printf("FINAL VELOCITY = %0.2f \n",v);
	printf("DISTANCE TRAVEL = %0.2f \n",s);
	getch();
	clrscr();

}
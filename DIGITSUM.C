#include<stdio.h>
#include<conio.h>

int main()
{
	int n,s=0;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&n);
	while(n!=0)
	{
		s=s+n%10;
		n=n/10;
	}
	printf("sum of the digit=%d",s);
	getch();
	clrscr();
	return 0;
}
#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i=1;
	printf("enter the number\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i==2)
		{
			printf("%d\n",i);
		}
		if(i<=10 && i%i==0 && i%2!=0 && i!=9)
		{
			 printf("%d\n",i);
		}
		if(i>10 && i%i==0 && i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
		{
			printf("%d\n",i);
		}
		i++;
		}
		getch();
		clrscr();
		return 0;
}







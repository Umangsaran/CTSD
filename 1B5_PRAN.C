
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int s,area,perimeter,diagonal;
printf("enter the side of squre\n");
scanf("%d",&s);
area=s*s;
perimeter=4*s;
diagonal=s*(sqrt(2));
printf("area of squre:%d\n",area);
printf("perimeter of squre:%d\n",perimeter);
printf("diagonal of squre:%d\n",diagonal);
getch();
clrscr();
return 0;
}
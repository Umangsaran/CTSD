#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float l,b,area,perimeter,diagonal;
 printf("ENTER THE LENGTH: \n");
 scanf("%f",&l);
 printf("ENTER THE BREADTH: \n");
 scanf("%f",&b);
 area =l*b;
 perimeter= (2*(l+b));
 diagonal= sqrt((l*l)+(b*b));
 printf("\n---------------------------\n");
 printf("AREA OF RECTANGLE = %0.2f\n",area);
 printf("PERIMETER OF RECTANGLE = %0.2f\n",perimeter);
 printf("DIAGONAL OF RECTANGLE = %0.2f\n", diagonal);
 printf("\n---------------------------\n");

getch();
clrscr();
return 0;
}
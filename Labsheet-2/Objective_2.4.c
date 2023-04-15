#include<stdio.h>
#include<conio.h>
void main()
{

int x,y,z=10;
clrscr();
printf("enter the value of x :");
scanf("%d",&x);
printf("enter the value of y :");
scanf("%d",&y);
if (x==y)
printf("x is equal to y");
else if (x==z)
printf("X is equal to z");
else if (y==z)
printf("y is equal to z");
else
printf("x,y,z are not equal");
getch();


}

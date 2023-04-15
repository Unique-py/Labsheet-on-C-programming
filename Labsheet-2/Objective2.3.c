#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("enter the value of x and y :");
scanf("%d%d",&x,&y);
if(x>y)
printf("x is greater than y");
else
printf("Y is greater than x ");
getch();
	
}
/* output 
enter the value of x and y :5 6
Y is greater than x*/



//Program to find if entered number is even or odd
#include<stdio.h>
#include<conio.h>
main()
{
int n;
printf("Enter a number ");
scanf("%d",&n);
if(n%2==0)
printf("%d is even",n);
else
printf("%d is odd ",n);
	
}

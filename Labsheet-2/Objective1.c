#include<stdio.h>
#include<conio.h>
main()
{ 
  int x,y;
  clrscr();
  printf("Enter the value of x:");
  scanf("%d",&x);
  if(x>0) y=1;
  if(x==0) y=-1;
  printf("\n y=%d",y);
  getch();
}


/* Output 
Enter the value of x:4
 y=1 */
/*
This program prompts the user to enter a value for x, then determines the value of y based on the value of x. 
If x is greater than 0, y is set to 1. If x is equal to 0, y is set to -1. The final value of y is then printed to the screen.
\The program uses the standard input/output library functions in C, including printf(), scanf(), and getch(). 
It also uses the clrscr() function from the conio.h library to clear the console screen before printing the result.

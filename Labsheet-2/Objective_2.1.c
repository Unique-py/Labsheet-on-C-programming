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

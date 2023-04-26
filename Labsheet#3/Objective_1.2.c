#include<stdio.h>
#include<conio.h>

int main()
{
    int marks;
    printf("enter the marks of a student ");
    scanf("%d",&marks);
    if(marks<32)
        printf("fail");
    else if(marks < 45 || marks == 45)
        printf("Third Division");
    else if(marks < 60 || marks == 60)
        printf("Second Division");
    else
        printf("First Division");
    
    return 0;
}

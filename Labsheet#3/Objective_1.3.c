#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks of the student :");
    scanf("%d",&marks);
    if(!(marks<32))
        printf("Pass");
    else
        printf("Fail");

    return 0;
}

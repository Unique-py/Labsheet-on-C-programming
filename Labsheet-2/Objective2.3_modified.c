//Modified to show all  three variabale equal
#include<stdio.h>
#include<conio.h>

int main() {
    int x, y, z = 10;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    if (x == y && y == z) {
        printf("x, y, and z are all equal");
    }
    else if (x == y) {
        printf("x is equal to y");
    }
    else if (x == z) {
        printf("x is equal to z");
    }
    else if (y == z) {
        printf("y is equal to z");
    }
    else {
        printf("x, y, and z are not equal");
    }

    return 0;
}

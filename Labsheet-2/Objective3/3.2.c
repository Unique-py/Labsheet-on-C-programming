// Algorithm:

//     Start
//     Declare the variables a, b, c, discriminant, root1, root2, and imaginary.
//     Read the values of a, b, and c from the user.
//     Calculate the discriminant using the formula: discriminant = (b * b) - (4 * a * c)
//     If the discriminant is greater than 0, calculate the roots using the formula: root1 = (-b + sqrt(discriminant)) / (2 * a) and root2 = (-b - sqrt(discriminant)) / (2 * a)
//     If the discriminant is equal to 0, calculate the root using the formula: root1 = root2 = -b / (2 * a)
//     If the discriminant is less than 0, calculate the roots using the formula: real part = -b / (2 * a) and imaginary part = sqrt(-discriminant) / (2 * a)
//     Print the roots.
//     End.
/*
FlowChart 
   +--------------+
   | Start        |
   +--------------+
          |
          v
   +--------------+
   | Declare      |
   | Variables    |
   +--------------+
          |
          v
   +--------------+
   | Read Values  |
   +--------------+
          |
          v
   +--------------+
   | Calculate    |
   | Discriminant |
   +--------------+
          |
   +------+-------+------+
   |                     |
   v                     v
+--------------+   +--------------+
| Discriminant |   | Discriminant |
| > 0          |   | = 0          |
+--------------+   +--------------+
   |                     |
   v                     v
+--------------+   +--------------+
| Calculate    |   | Calculate    |
| Roots        |   | Root         |
+--------------+   +--------------+
   |                     |
   v                     v
+--------------+   +--------------+
| Print Roots  |   | Print Root   |
+--------------+   +--------------+
          |
          v
   +--------------+
   | End  
   +------
--------+
   */

//program  to find the  root of quadratic equation
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, imaginary;

    printf("Enter the coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are: %.2f and %.2f", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("The root is: %.2f", root1);
    }
    else {
        real = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        printf("The roots are: %.2f + %.2fi and %.2f - %.2fi", real, imaginary, real, imaginary);
    }

    return 0;
}

Footer

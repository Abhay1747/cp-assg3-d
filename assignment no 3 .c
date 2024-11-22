/*
NAME:- ABHAY GAUD
UIN:-241P070
ROLL NO.:-3
DIV :-D
TASK:-wap to read three integer value from the keyboard and
display the output starting that they are sides of right
angled triangle or not
ASSIGNMENT PARTNER :- RIZVI ZAID
UIN:-241P097
ROLL no.:-28
*/
#include <stdio.h>

int main() {
    int a, b, c;

    // Input three integer values
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if they can form a right-angled triangle
    // Sorting the values so that the largest one is considered as the hypotenuse
    if (a > b && a > c) {
        if (a * a == b * b + c * c) {
            printf("Yes, the given integers can form a right-angled triangle.\n");
        } else {
            printf("No, the given integers cannot form a right-angled triangle.\n");
        }
    } else if (b > a && b > c) {
        if (b * b == a * a + c * c) {
            printf("Yes, the given integers can form a right-angled triangle.\n");
        } else {
            printf("No, the given integers cannot form a right-angled triangle.\n");
        }
    } else {
        if (c * c == a * a + b * b) {
            printf("Yes, the given integers can form a right-angled triangle.\n");
        } else {
            printf("No, the given integers cannot form a right-angled triangle.\n");
        }
    }

    return 0;
}
/*Output
Enter three integers: 5
12
13
Yes, the given integers can form
a right-angled triangle.
*/
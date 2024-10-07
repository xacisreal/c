#include <stdio.h>
int main() {
    float radius,pi, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    pi=3.14;
    area = pi * radius * radius;
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}


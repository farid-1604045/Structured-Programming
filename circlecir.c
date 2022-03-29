#include<stdio.h>
#include<math.h>

int main()
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter radius of a circle: \n");
    scanf("%lf",&radius);
    circumference = 2*PI*radius;
    area = PI*(radius*radius);
    printf("Circumference of a circle: %lf\n", circumference);
    printf("Area: %lf", area);

    return 0;
}

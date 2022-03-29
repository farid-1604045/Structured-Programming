#include<stdio.h>

double square(double x)
{
    return x * x;
}
void birthday(char name[], int age)
{
    printf("Happy birthday to dear! %s.\n", name);
    printf("Your are %d years old!\n", age);
}

int main()
{
    char name[] = "Bro";
    int age = 21;
    birthday(name, age);

    double x = square(3.14);
    printf("%lf",x);

    return 0;
}

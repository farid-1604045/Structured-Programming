#include<stdio.h>

void hello(char[], int); //function prototype
int main()
{
    // function prototype

    // What is it?
    // Function declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct arguments
    char name[] = "Bro";
    int age = 21;

    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("Hello %s, ", name);
    printf("You are %d years old!", age);
}

#include<stdio.h>

void printAge(int *pAge)
{
    printf("You are %d years old\n", *pAge);
}
int main()
{
    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value at address)

    int age = 21;
    int *pAge = NULL; //good practice to assign NULL if declaring a pointer
    pAge = &age;
    /*int *pAge = &age;

    printf("address of age: %p\n", &age);
    printf("address of pAge: %p\n", pAge);

    printf("value of age: %d\n", age);
    printf("value of pAge: %d\n", *pAge);

    printf("size of age: %d\n", sizeof(age));
    printf("size of pAge: %d\n", sizeof(pAge));*/

    printAge(pAge);

    return 0;
}

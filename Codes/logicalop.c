#include<stdio.h>
#include<stdbool.h>

int main()
{
    // logical operators = && (AND) checks if two conditions are true
    // logical operators = || (OR) checks if at least on condition is true
    // logical operators = ! (NOT) reverses the state of a condition


    float temp = -1000;
    bool sunny = true;

    if(!sunny){
        printf("It's cloudy outside!");
    }
    else
    {
        printf("It's sunny  outside!\n");
    }

    return 0;
}

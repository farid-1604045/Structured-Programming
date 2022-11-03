#include<stdio.h>

int main()
{
    // array = a data structure that can store many values of the same data type.

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    for(int i=0; i<sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("$%.2lf ", prices[i]);
    }

    return 0;
}

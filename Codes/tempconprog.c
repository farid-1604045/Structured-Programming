#include<stdio.h>
#include<ctype.h>

int main()
{
    char unit;
    float temp;
    printf("Is the temperature in (F) or (C)?: ");
    scanf("%c", &unit);
    if(unit>='a'&&unit<='z'){
        unit='A'+(unit-'a');
    }
    //built in function unit = toupper(unit);


    if(unit == 'C'){
        printf("The temp is currently in C\n");
        printf("Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp*9/5)+32;
        printf("The temp in Fahrenheit is: %f\n", temp);
    }
    else if(unit == 'F'){
        printf("The temp is currently in F\n");
        printf("Enter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp = (temp-32)*5/9;
        printf("The temp in Celsius is: %f\n", temp);
    }
    else{
        printf("%c is an invalid input\n", unit);
    }

    return 0;
}

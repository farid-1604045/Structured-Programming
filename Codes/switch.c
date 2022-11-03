#include<stdio.h>

int main()
{
    //switch = A more efficient alternative to using many "else if" statements
    //         allows a value to be tested for equality against many cases

    /*char grade;

    printf("Enter a letter grade: ");
    scanf("%c", &grade);

    switch(grade)
    {
    case 'A':
        printf("Perfect!\n");
        break;
    case 'B':
        printf("You did good!\n");
        break;
    case 'C':
        printf("You did okay!\n");
        break;
    case 'D':
        printf("At least it's not an F!\n");
        break;
    case 'F':
        printf("You Failed!\n");
        break;
    default:
        printf("You didn't enter valid grade!\n");

    }
    */
    int a;
    scanf("%d",&a);
    a=(a-4)*(9/3);
    printf("%d",a);

    return 0;
}

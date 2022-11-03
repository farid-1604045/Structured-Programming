#include<stdio.h>
#include<string.h>

int main()
{
    // for loop = repeats a section of code a limited amount of times
    // while loop = checks a condition, then executes a block of code if condition is true
    // do while loop = always executes a block of code once, then checks a condition

    /*char name[25];

    printf("What's your name?: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    printf("Hello %s", name);

    while(strlen(name) == 0)
    {
        printf("What's your name?: ");
        fgets(name,sizeof(name),stdin);
        name[strlen(name)-1]='\0';
        printf("Hello %s", name);
    }
    */

    int number = 0;
    int sum = 0;

    do{
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if(number > 0){
            sum += number;
        }
    }while(number > 0);

    printf("%d\n",sum);

    return 0;
}

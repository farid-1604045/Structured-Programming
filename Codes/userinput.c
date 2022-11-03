#include<stdio.h>
#include<string.h>

int main()
{
    char name[25];
    int age;

    printf("what's your name?\n");
    //scanf("%s", &name);
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';
    //gets(name);

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old\n", age);

    return 0;
}

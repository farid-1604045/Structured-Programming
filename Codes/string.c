#include<stdio.h>
#include<string.h>

int main()
{
    char string1[] = "BBo";
    char string2[] = "Bbo";

    //strlwr(string1);          // converts a string to lowercase
    //strupr(string1);          // converts a string to uppercase
    //strcat(string1, string2); // appends a string2 to end of string1
    //strncat(string1, string2, 1); //appends n characters from string2 to string1
    //strcpy(string1, string2); //copy string2 to string1
    //strncpy(string1, string2, 2); // copy n characters of string2 to string1
    //strset(string1, '?');     //sets all characters of a string to a given character
    //strnset(string1, 'x', 1); //sets first n characters of a string to a given character
    //strrev(string1);          //reverse a stirng

    //int result = strlen(string1);
    //int result = strcmp(string1, string2);
    //int result = strncmp(string1, string2, 1);         //string compare n characters
    //int result = strcmpi(string1, string2);         //string compare all (ignore case)
    //int result = strnicmp(string1, string2, 2);      //string compare n characters (ignore case)

    if(result == 0)
    {
        printf("This strings are same\n");
    }
    else
    {
        printf("This strings are different\n");
    }
    //printf("%d", result);
    //printf("%s", string1);

    return 0;
}

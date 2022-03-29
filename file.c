#include<stdio.h>

int main()
{
    FILE *pF = fopen("C:\\Users\\HP\\OneDrive\\Desktop\\test.txt", "w");

    fprintf(pF, "\nSpongebob Squarepants");

    fclose(pF);

    /*if(remove("test.txt") == 0)
    {
        printf("That file was deleted successfully!");
    }
    else{
        printf("That file wasn't deleted successfully!");
    }
    */
    return 0;
}

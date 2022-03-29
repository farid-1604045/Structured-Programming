#include<stdio.h>

int main()
{
    FILE *pF = fopen("C:\\Users\\HP\\OneDrive\\Desktop\\poem.txt", "r");
    char buffer[255];

    if(pF == NULL)
    {
        printf("Unable to open file!\n");
    }
    else{
        while(fgets(buffer,sizeof(buffer),pF) != NULL)
        {
            printf("%s", buffer);
        }
    }
    printf("\n");
    fclose(pF);

    return 0;
}

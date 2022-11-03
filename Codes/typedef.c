#include<stdio.h>
#include<string.h>
//typedef char user[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;
int main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    User user1 = {"Bro", "password123", 1235};
    User user2 = {"Bra", "password321", 5321};

    printf("%s\n",user1.name);
    printf("%d\n",user1.id);
}

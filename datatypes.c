#include<stdio.h>
#include<stdbool.h>

int main()
{
    char a = 'C';       //single character %c
    char b[] = "Bro";   //array of characters %s

    float c = 3.141592; //4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793; //8 bytes (64 bits of precision) 15-16 digits %lf

    bool e = true;    //1 byte (true or false) %d

    char f = 105;     // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255;    //1 byte (0 to +255) %d or %c

    short int h = 32767;  //2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535;  //2 bytes (0 to +65,535) %d

    int j = 2147483647;     //4 bytes (-2,147,483,648 to +3,147,483,647) %d
    unsigned int k = 4294967295;   //4 bytes (0 to 4,294,967,295) %u

    //long long int l = 9;      //8 bytes (-9 quintillion to +9 quintillion) %lld
    //unsigned long long int m = 9; //8 bytes (0 to +18 quintillion) %llu


    //printf("%f\n",c);
    //printf("%0.15lf\n",d);
    //printf("%d\n",e);
    //printf("%d\n",f);
    //printf("%c\n",f);
    //printf("%d\n",h);
    //printf("%i\n",i);
    //printf("%d\n",j);
    //printf("%u\n",k);


    return 0;

}

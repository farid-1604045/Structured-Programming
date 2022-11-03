#include<stdio.h>

int main()
{
    // memory = array of bytes withing RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)


    char a[2];
    int b[3];
    long long c = 'Z';

    printf("%d bytes\n",sizeof(a));
    printf("%d bytes\n",sizeof(b));
    printf("%d bytes\n",sizeof(c));

    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%p\n",&c);

    return 0;
}

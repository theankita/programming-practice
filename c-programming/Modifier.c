#include <stdio.h>

int main()
{

    int i = 10;         //4
    short int j = 20;   //2
    long int k = 30;    //8

    printf("size od integer is: %lu\n", sizeof(i));
    printf("size of short integer: is %lu\n", sizeof(j));
    printf("size of long integer: is %lu\n", sizeof(k));

    return 0;
}
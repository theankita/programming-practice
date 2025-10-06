#include<stdio.h>

struct Demo
{
    int i;
    float j;
    int k;
};

int main() 
{
    struct Demo obj;

    printf("Size of demo is: %d\n", sizeof (struct Demo)); //12 this is about future
    printf("Size of object is: %d\n", sizeof(obj)); //12 this is about present

    return 0;
}
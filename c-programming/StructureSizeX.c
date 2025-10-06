#include<stdio.h>

struct Demo
{
    int i;
    char ch1;
    float f;
    char ch2;
    int j;
};

int main() 
{
    printf("Size of structure is: %lu", sizeof(struct Demo));
    return 0;
}
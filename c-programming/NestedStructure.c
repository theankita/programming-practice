#include<stdio.h>

struct Demo
{
    int  i;
    float f;
};

struct Hello
{
    int no;
    float Marks;
    struct Demo 
    dobj; // Nested
};
int main() 
{
   printf("Size of struture is:%lu\n", sizeof(struct Hello)); //16 
}
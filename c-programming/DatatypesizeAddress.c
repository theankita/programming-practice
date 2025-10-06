#include<stdio.h>
int main()
{
    char cValue='S';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 98.564323;
    
    printf("%lu\n", sizeof (cValue));
    printf("%lu\n", sizeof (iValue));
    printf("%lu\n", sizeof (fValue));
    printf("%lu\n", sizeof (dValue));
    
    printf("Address Of cValue: %lu\n" ,&cValue);
    printf("Address Of iValue: %lu\n" ,&iValue);
    printf("Address Of fValue: %lu\n" ,&fValue);
    printf("Address Of lfcValue: %lu\n" ,&dValue);
    return 0;
} 

//Storage Classes
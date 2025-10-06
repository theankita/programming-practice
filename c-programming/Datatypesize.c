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
    
    return 0;
} 

//Storage Classes
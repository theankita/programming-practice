#include<stdio.h>
#include<stdlib.h>


int main()
{
    int length = 0;
    int *Arr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d", &length);

    //Step1: Allocate the memory 
    Arr = (int*) malloc(length * sizeof(int));
    if(Arr==NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory get successfully allocated\n");
    }

    //Step2: Use the memory
    //Step3: Free the memory

    free(Arr);

    return 0;

}
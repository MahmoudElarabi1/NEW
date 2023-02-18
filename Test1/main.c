#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 55;
unsigned int NumberTwo = 66;
unsigned int NumberThree = 88;

unsigned short Number1 = 11;
unsigned short Number2 = 22;

unsigned int *Ptr1;
unsigned int* Ptr2;
unsigned int * Ptr3;
unsigned short *Ptr4;
char *Ptr5;

unsigned int *PPtr, Number_1, Number_2 = 3;


int main()
{
    Ptr1 = &NumberOne;

    printf("NumberOne Value   = %i\n", NumberOne);
    printf("NumberOne Address = 0x%X\n", &NumberOne);
    printf("NumberOne Address = 0x%X\n", Ptr1);
    printf("NumberOne Value   = %i\n", *(&NumberOne));
    printf("NumberOne Value   = %i\n", *(Ptr1));

    Ptr1 = &NumberTwo;
    printf("NumberTwo Address = 0x%X\n", Ptr1);
    Ptr1 = &NumberThree;
    printf("NumberThree Address = 0x%X\n", Ptr1);

    Ptr4 = &Number1;
    printf("Number1 Address = 0x%X\n", Ptr4);
    Ptr4 = &Number2;
    printf("Number2 Address = 0x%X\n", Ptr4);
    return 0;
}

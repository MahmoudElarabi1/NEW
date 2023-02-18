#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 55;
unsigned int NumberTwo = 66;

unsigned int *Ptr;

int main()
{
    Ptr = &NumberOne;
    printf("Ptr Address = 0x%X \n", Ptr);
    printf("Ptr Value   = %i \n", *Ptr);

    printf("NumberOne = %i\n", NumberOne);
    *Ptr = 99;
    printf("NumberOne = %i\n", NumberOne);

    NumberOne = 2;
    NumberTwo = 3;

    unsigned int *Ptr1 = &NumberOne;
    unsigned int *Ptr2 = &NumberTwo;

    unsigned int Result = *(&NumberOne) + *(&NumberTwo);
    printf("Result = %i \n", Result);

    Result = *(Ptr1) + *(Ptr2);
    printf("Result = %i \n", Result);


    return 0;
}

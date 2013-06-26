/**
10/21/2012
Programming in C
Ch12 no. 3
function the return the nuber of bits of the type int
*/
#include <stdio.h>

int int_size()
{
    int count = 0;
    int ones = ~0;
    while(ones != 0)
    {
        count++;
        ones <<= 1;
    }
    return count;
}

int main(void)
{
    printf("%i", int_size());
    return 0;
}

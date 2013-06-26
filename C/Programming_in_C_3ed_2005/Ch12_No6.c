/**
10/21/2012
Programming in C
Ch12 no. 6
function that searches throught (from left to right) the bits of a unsigned integer to see if there is a certain pattern of bits
return the index in the number if the pattern is found, otherwise return -1
*/
#include <stdio.h>

//fucntion that returns the number of bits of unsignedInt in the current system
int unsignedInt_size()
{
    int count = 0;
    unsigned int ones = ~0;
    while(ones != 0)
    {
        count++;
        ones <<= 1;
    }
    return count;
}

/**function of the problem (n is not allowed to have value of zero)
* @param source is the number to be search
* @param pattern is a pattern of bits
* @param n is the number of rightmost bits of pattern that form the wanted target pattern
* @return the index in the number if the pattern is found (start from 0, rightmost), otherwise return -1
*/

int bitpat_search(unsigned int source, unsigned int pattern, int n)
{
    int size = unsignedInt_size(); //find the size of unsigned integer

    //find the number of bits of the pattern (start from 1)
    int nOnes = 1;
    for(int i = n; i != 1; i--)
        nOnes = (nOnes << 1) + 1;

    pattern &= nOnes; //set the pattern to the required pattern (cut off unwanted bits and set them to 0)

    //search through the number to find the bit pattern, start from the lefmost
    //(for example, if the number of bits of the pattern is 5, and source has 32 bits,
    //the search start from the fifth bits from the left)
    for(int j = 0; size >= j + n; j++)
        if(((source >> (size - j - n)) & nOnes) == pattern)
            return j;

    return -1;
}

int main(void)
{
    printf("%i", bitpat_search(151, 18, 5));
    return 0;
}


/**
10/18/2012
Programming in C
Ch7 no. 7
Print prime number up to 150 using Sieve of Erastosthenes algorithm
*/
#include <stdio.h>

int main(void)
{
    int n = 150;
    int array[n];
    for(int i = 2; i < 150; i++)
        array[i] = 0;
    int i = 2;
    while(i <= n)
    {
        if(array[i] == 0)
            printf("%i\n", i);
        for(int j = 1; j*i <= n; j++)
            array[i*j] = 1;
        i++;
    }
    return 0;
}

/**
10/20/2012
Programming in C
Ch11 no. 9
function reading a line of characters from terminal and put them to an character string
*/
#include <stdio.h>

int main(void)
{
    char line [101];
    void readLine (char *cPtr);

    for(int i = 0; i < 3; i++)
    {
        readLine(line);
        printf("%s\n", line);
    }
    return 0;
}

void readLine (char *cPtr)
{
    char c;
    do
    {
        c = getchar();
        *(cPtr++) = c;
    }while(c != '\n');

    *(--cPtr) = '\0';
}

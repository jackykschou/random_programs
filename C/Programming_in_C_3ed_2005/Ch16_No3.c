/**
11/13/2012
Programming in C
Ch16 no. 3
read a file and write the contents of the file to a new file called "new.txt" and
converts all lower cast letter to upper case
*/
#include <stdio.h>

int main(void){
    FILE *old = fopen(/*input file name or file path*/, "r");
    FILE *New = fopen("new.txt", "w");
    int c;

    while((c = getc(old)) != EOF){
        putc(toupper(c), New);
    }

    fclose(old);
    fclose(New);

    return 0;
}

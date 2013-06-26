/**
11/14/2012
Programming in C
Ch16 no. 4
write content from 2 files to stdout (terminal by default), line by line and alternatively.
if there is no more line in either one file,
just write the rest of the file that is not empty yet.
*/
#include <stdio.h>

int main(void){
    FILE *file1 = fopen(/*file1 (or file path)*/, "r");
    FILE *file2 = fopen(/*file2 (or file path)*/, "r");
    char array1[100];
    char array2[100];

    _Bool file1End = 0;
    _Bool file2End = 0;

    while(!file1End || !file2End){
        if(fgets(array1, 100, file1) == NULL)
            file1End = 1;
        if(fgets(array2, 100, file2) == NULL)
            file2End = 1;
        if(!file1End && !file2End){
            fprintf(stdout, array1);
            fprintf(stdout, array2);
        }
        else if(!file1End)
            fprintf(stdout, array1);
        else
            fprintf(stdout, array2);
    }

    fclose(file1);
    fclose(file2);

    return 0;
}

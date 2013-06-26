
/**
10/17/2012
Programming in C
Ch6 no. 6
Program doesn't work when number gets too large because integer is 32bits/64bits
can use getc function, make BigInt library, String to solve the problem
Print english that represents input number (digit by digit)
*/
#include <stdio.h>

int main(void){
int digit;//use to hold digit
unsigned long long number;//hold input number
unsigned long long revNumber = 0; //the reversed digit of the input number
int no_zero = 0;//number of zero needed to be printed at the end
unsigned long long i = 1;//hold how many digits does the number have (+1 = i*10)

printf("Please enter a number\n");
scanf("%llu", &number);
unsigned long long testing = number;//a copy of input number for counting how many digits does the number have (+1 = i*10)

//counts how many digits does the number have (+1 = i*10)
for(; testing != 0;i *= 10){
    testing /= 10;
}

//make the reversed number
do{
    i /= 10;
    digit = number % 10;
    if(digit == 0)
        no_zero++;
    revNumber += (digit*i);
    number /= 10;
}while(number != 0);

//print the result using the reversed number
do{
    digit = revNumber % 10;
    revNumber /= 10;
    switch(digit)
    {
     case 0:
     printf("zero ");
     no_zero--; //minus zero not at the end
     break;
     case 1:
     printf("one ");
     break;
     case 2:
     printf("two ");
     break;
     case 3:
     printf("three ");
     break;
     case 4:
     printf("four ");
     break;
     case 5:
     printf("five ");
     break;
     case 6:
     printf("six ");
     break;
     case 7:
     printf("seven ");
     break;
     case 8:
     printf("eight ");
     break;
     default:
     printf("nine ");
    }
}while(revNumber != 0);

//add back the ending zero
for(;no_zero!=0;no_zero--)
printf("zero ");
return 0;
}

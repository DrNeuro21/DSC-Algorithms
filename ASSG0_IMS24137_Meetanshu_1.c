/* 1. Write a program to convert a given octal number (base 8) to its equivalent decimal number (base
10). For example, the decimal number corresponding to the octal number (205)8 is 2∗82+0∗81+5∗80
= (133)10 */

#include<stdio.h>
int main()
{
    int n;
    int decimal = 0;
    int base = 1;

    scanf("%d", &n);

    while (n > 0)
    {   
        int number = n % 10;  //This directs the source to the last digit
        decimal += number * base; //This formulae states that the new decimal value increases while multiplying the number to bases, as asked in the question
        n = n / 10;
        base *= 8; //since we are working with octal numbers (base 8)

    }

    printf("%d", decimal);

    return 0;
}
//Program named sumfrac.c that prompts the user to enter two fractions, each of the form
//The program then adds the fractions together and displays the resulting fraction
//Program should prompt the user to enter each fraction as two integers separated by a slash on the same line

#include <stdio.h>


int main()
{
    int a, b, c, d;
    printf("Input the first fraction: ");
    scanf("%d/%d", &a,&b);
    printf("Input the second fraction: "); 
    scanf("%d/%d", &c,&d);
    a = a * d;
    c = c * b;
    b = b * d;
    a = a + c;
    printf("The sum is: %d/%d\n", a, b);
}
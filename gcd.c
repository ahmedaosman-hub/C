//Program named that prompts the user for two positive integers on the same line. 
//It calculates and displays the greatest common divisor (GCD).




#include <stdio.h>

int main()
{
    int number1, number2, largest, i;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&number1,&number2);

    if (number1 > number2) {
      largest = number1;
    } else 
      largest = number2;
  
    for (i = largest; i >= 1; i--)
    {
      if ((number1%i == 0) && (number2%i == 0)) 
      {
        printf("GCD = %d\n",i);
        break;
      }
    }
    return 0;
}
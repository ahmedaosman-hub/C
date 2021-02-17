//A written program to generate Collatz sequences. Program should:
//Prompt the user to enter a positive integer. If the user enters an invalid integer, re-prompt the user until the number is positive.
//Print out the Collatz sequence.
//Print out the length of the sequence.

//Program should have three functions:
//getStart: Prompts the user and returns a valid starting number. It should contain a loop to ensure the number is positive.

//nextCollatz: Given an integer, generate the next number in the sequence. This function should not generate the whole sequence; rather, just the next number. 
//It also does not print anything out. 

//main: Calls getStart to obtain the starting number. Then loops around nextCollatz until the sequence reaches 1, printing each number as it goes. 
//Finally, it prints the length of the sequence. 

#include <stdio.h>

int getStart(){
  int integer;
    
  while (1) {
    printf("Enter the starting number: ");
    scanf("%d", &integer);
  
    if(integer > 0) 
       return integer;           
    else 
        printf("The number should be a positive integer.\n");
  }
}

int nextCollatz(int integer){
    if (integer % 2 ==0 ){
        return integer / 2;
    }
    else 
        return (integer * 3) + 1;
}

int main(){
    int integer, counter=1; 
    integer = getStart(integer);
    printf("Collatz sequence: ");
    while (integer != 1 ){ 
        printf("%d, ", integer);
        integer=nextCollatz(integer);
        counter++;
    }
    printf("1");
    printf("\nlength: %d\n", counter);

}
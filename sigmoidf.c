//Program that calculates the sigmoid function. 
//Program will have two functions
//float sigmoid (float x): Computes the sigmoid function 
//main: generate a table of input and output value.

#include <stdio.h>
#include <math.h>

//sigmoid : returns {1/(1+e^-x)}
float sigmoid(float x){
   return 1/(1+exp(-x));
}

//main function
int main(){
   float x;
   for(x = -5.0 ; x <= 5.0; x+=1.0)
       printf("%.3f %.3f\n",x,sigmoid(x));
  
}
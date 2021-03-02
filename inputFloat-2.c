// Create a program that prompts the user to input the prices of three items
// Display them in ascending order

#include <stdio.h>
#include <stdlib.h>


// functions prototypes
void getPrices(float *, float *, float *);
void swap(float *, float *);

int main(void){
    // declaring the pointers
    float *price1, *price2, *price3;
    
    // creating the memory
    price1 = (float*)malloc(sizeof(float));
    price2 = (float*)malloc(sizeof(float));
    price3 = (float*)malloc(sizeof(float));

    // getting the user's inputer 
    getPrices(price1, price2, price3);
    printf("The three prices are: %.2f %.2f %.2f \n", *price1, *price2, *price3);
    return 0; 
}

// Gets the prices and arranges them in order
void getPrices(float *p1, float *p2, float *p3){
    printf("Enter the price of item 1: ");
    scanf("%f", p1);
    
    printf("Enter the price of item 2: ");
    scanf("%f", p2);

    printf("Enter the price of item 3: ");
    scanf("%f", p3);

    if(*p1 > *p2)
        swap(p1, p2);

    if(*p1 > *p3)
        swap(p1, p3);

    if(*p2 > *p3)
        swap(p2, p3);

}
// swaps the value of both variables
void swap(float *p1, float *p2){
    float temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

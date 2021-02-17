// Program that prompts the user for a dollar amount
// Displays the minimum number of bills needed for that amount. 
// Program will have 3 functions
// Bills: Does the calculation for a dollar amount to find the minimum number of bills
// getAmount: Prompts the user for input, loops back if the input is negative. 
// main: Calls getAmount. Calls bills with the amount returned. Print out the amount. 

#include <stdio.h>

int bills(){
    int price;
    // 100 bills
    int dol100 = price/100;
    // 20 bills
    int dol20 = (price%100)/20;
    // 10 bills
    int dol10 = (price%100%20)/10;
    // 5 bills 
    int dol05 = (price%100%20%10)/5;
    // 1 bills
    int dol01 = (price%100%20%10%5)/1;
    // adding all the bills
    int amount = dol100 + dol20 + dol10 + dol05 + dol01;
    // returning the amount
    return amount; 
}

int getAmount(){
    
    int input;
    printf("Enter a dollar amount: ");
    scanf("%d",&input);

    while(input < 0){
        printf("Enter a positive number. \n");
        printf("Enter a dollar amount: ");
        scanf("%d",&input);
    }
    return input;
}

int main(){
    printf("You get %d bills back. \n", bills(getAmount()));
    return 0; 
}
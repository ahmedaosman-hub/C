//Program to fill an integer array with values

#include <stdio.h>

int collatz(int integer){
    if(integer % 2 == 0) {
        return integer / 2;
    }
    else 
        return ((integer * 3) + 1);
}

int main(){
    int array[40];
    int index = 0; 

    // fill 0 to 9, with values from 0 - 9
    for(; index < 10; index++) array[index] = index;

    // fill 10-19, with values from 100 - 190
    for(; index < 20; index++) array[index] = 10 * index;

       array[index++] = 4; // index 20
       array[index++] = 8; // index 21
       array[index++] = 15; // index 22
       array[index++] = 16; // index 23
       array[index++] = 23;// index 24
       array[index++] = 42; // index 25

       array[index++] = 7;

    for(; index < 40; index = index + 1){
       array[index] = collatz(array[index - 1]);
    }

    int i;
    for(i = 0; i < 40; i++){
        printf("array [%d] = %d\n ", i, array[i]);
    }

}
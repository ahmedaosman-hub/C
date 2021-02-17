// Program that copies values out of one array and into another based on 
// whether the values are positive, negative, or zero. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Change this constant to 1 to fill source array
// with random values.
#define RAND_ARR 0

#define SRC_SIZE 10

int main(){
    // Declare source array
    int source[SRC_SIZE];
    
    // Fill array with random values or constant values
    if (RAND_ARR == 1) {
        // Seed random number generator
        srandom(time(NULL));
        
        // Fill array with random values
        for (int i = 0; i < SRC_SIZE; i++)
            source[i] = random() % 20 - 10;
    }
    else{
        // Fill array with constant values
        source[0] = 9;
        source[1] = 2;
        source[2] = 0;
        source[3] = -4;
        source[4] = 0;
        source[5] = 21;
        source[6] = -92;
        source[7] = 1;
        source[8] = 10;
        source[9] = 2;
    }
    
    //   Determine the number of positive and number of negative values
    int posLength = 0;
    int negLength = 0;

    //   Declare the pos and neg arrays, sized correctly.
    for(int i = 0; i < SRC_SIZE; i++){
        if (source[i] > 0){
            posLength++;
        }
        else if (source[i] < 0){
            negLength++;
        }
    }

    int pos[posLength], neg[negLength];

    int curr_pos = 0, curr_neg = 0; 

    for(int i = 0; i < SRC_SIZE; i++){
        if(source[i] > 0){
            pos[curr_pos++] = source[i];
        }
        else if (source[i] < 0){
            neg[curr_neg++] = source[i];
        }
    }
    
    // Display the contents of the pos array
    printf("pos: ");
    for (int i = 0; i < posLength; i++){
        printf("%d ", pos[i]);
    }
    printf("\n");
    
    // Display contents of the neg array
    printf("neg: ");
    for(int i = 0; i < negLength; i++){
        printf("%d ", neg[i]);
    }
    printf("\n");
    return 0; 
}
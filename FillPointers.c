// Another form of FillArray.c but using pointers

#include <stdio.h>

// current n in the collatz sequence, computer the next term
int nextCollatz(int n){
   // if n is odd
    if(n % 2 != 0)
        return 3 * n + 1; 
    // if n is even
    else 
        return n / 2; 
}

// fill the array positions from 0 to 9
void fill09(int *arr){
    for (int i = 0; i < 10; i++)
        arr[i] = i; 
}

// function to fill the array from position 10 to 19
void fill1019(int *arr){
    for(int i= 0; i < 10; i++)
        *(arr + i) = 100 + (i * 10);
}

//function to fill the array from position 20 to 25
void fill2025(int *arr){
    *(arr) = 4;
    *(arr + 1) = 8; 
    *(arr + 2) = 15; 
    *(arr + 3) = 16;
    *(arr + 4) = 23;
    *(arr + 5) = 42;
    return; 
}
 
// 26th element is passed to fill2639
void fill2639(int *arr){
    *arr = 7;
    for(int i = 1; i < 14; i++)
        *(arr + i) = nextCollatz(*(arr + i - 1));
    return;
}
// prints the array
void printarray(int *arr){
    for(int i = 0; i < 40; i++)
        printf("%d ", arr[i]);
}
int main(){
    int arr[40];
    fill09(arr);
    fill1019(arr + 10);
    fill2025(arr + 20);
    fill2639(arr + 26);
    printarray(arr);
    return 0;
}
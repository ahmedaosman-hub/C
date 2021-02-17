//Assignment will implement a puzzle game called Reverse.
// This game uses an array of integers to store the state of the game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// function prototypes
int getInt(char prompt[], int min, int max);
void fillBoard(int board[], int boardLength);
void printBoard(int board[], int boardLength);
void shuffleBoard(int board[], int boardLength);
void reverse(int board[], int boardLength, int num);
int isSorted(int board[], int boardLength);

int main() {
    srandom(time(NULL));
        
    // Ask user for length of game, from 3-20
    int boardLength = getInt("Enter size of board: ", 3, 20);
    
    // Create board. Shuffle numbers.
    int board[boardLength];
    
    // Fill board with numbers 1-boardLength
    fillBoard(board, boardLength);
    
    // Shuffle board
    while (isSorted(board, boardLength))
    {
       shuffleBoard(board, boardLength);
    }
    
    // Print board
    printBoard(board, boardLength);
    
    int gameOver = 0;
    int moves = 0;
    while (!gameOver)
    {
        // Ask user for amount to reverse
        int amt = getInt("How many to reverse? ", 2, boardLength);
        
        // Reverse the first (amt) numbers
        reverse(board, boardLength, amt);
        
        // Print the board
        printBoard(board, boardLength);
        
        // Check to see if the game is over
        gameOver = isSorted(board, boardLength);
        
        moves++;
    }
    printf("You won in %d moves!\n", moves);
        return 0;
}

int getInt(char prompt[], int min, int max) {
        int amt;
        // Correct the input if not in range
        do {
                printf("%s", prompt);
                scanf("%d", &amt);
                if(amt < min || amt > max) {
                        printf("Value must be in the range %d-%d\n", min, max);
                }
        } while(amt < min || amt > max);
        
        return amt;
}

void fillBoard(int board[], int boardLength) {
        // fills index of arrays 
        for(int i = 0 ; i < boardLength ; ++i) {
                board[i] = i + 1;
        }
}

void printBoard(int board[], int boardLength) {
        // print all values in the board
        printf("Board: ");
        for(int i = 0 ; i < boardLength ; ++i) {
                printf("%d ", board[i]);
        }
        printf("\n");
}
void shuffleBoard(int board[], int boardLength) {
        for(int i = boardLength - 1 ; i >= 1 ; --i) {

                // generate a random number between i and (n - 1) 
                int a = rand()%(boardLength - i) + i;

                // swap values at index i and j
                int temp = board[i];
                board[i] = board[a];
                board[a] = temp;
        }
}

// reverse the number of elements 
void reverse(int board[], int boardLength, int num) {

        for(int i = 0 ; i < num/2 ; ++i) {
                int temp = board[i];
                board[i] = board[num - i - 1];
                board[num - i - 1] = temp;
        }
}

// checks if the array is sorted in ascending order
int isSorted(int board[], int boardLength) {
        for(int i = 0 ; i < boardLength - 1 ; ++i) {
                if(board[i] > board[i + 1]) {
                        // if elements are out of order return 0
                        return 0;
                }
        }
        return 1;
}
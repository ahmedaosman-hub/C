//Program to display a flag
//Prompt the user for the height of a flag pole. Acceptable values are 3 to 14, inclusive.
//

#include <stdio.h>

int main()
{
    int height, i; 
    printf("Enter the height of the flag pole: ");
    scanf("%d", &height);

    if ((height > 2) && (height < 15))
    { 
        height = height - 4;
        printf("|------+\n|      |\n|------+\n");
        for (i = 0; i <= height; i++) 
        { 
        printf("|\n");
        }
    } else 
        printf("Error: Please input a number between 3 and 14.\n");

    
    
}

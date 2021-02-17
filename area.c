//Program that prompts the user for the height and width of a rectangle 
//It calculates the area of the rectangle and displays it to the user.


#include <stdio.h> 

int main()
{
    int height, width, area;
    printf("Enter the height of a rectangle: ");
    scanf("%d", &height);
    printf("Enter the width: ");
    scanf("%d", &width);
    area = width * height;
    printf("The area is %d sq in.\n ", area);
}
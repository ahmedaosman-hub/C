// Program to capitalize each word in a user-inputted string. 
// Program will have:
// Prompt for user to enter string.
// A function to capitalize each word in the string. 
// Display the capitalized string. 

#include <stdio.h>
#define LEN 100

void capitalize(char str[]){
    if(str[0] >= 'a' && str[0] <= 'z' ){
        str[0] = str[0] - 32;
    }
    for(int i = 0; str[i] != '\0'; i++){
        while(str[i] != '\0' && str[i] != ' '){
            i++;
        }
        if(str[i] == '\0'){
            break;
        }
        if(str[i+1] >= 'a' && str[i+1] <= 'z'){
            str[i+1] = str[i+1] - 32; 
        }
    }

}
int main(){
    char str[LEN];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    capitalize(str);
    printf("After capitalizing: %s\n", str);
    return 0; 
}
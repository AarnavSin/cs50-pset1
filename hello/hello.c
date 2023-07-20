#include <stdio.h>
#include <cs50.h>

int main(void) {
    //Get name input from user
    string name = get_string("Please enter your name: ");
    
    //Print hello message
    printf("Hello, %s!\n", name);
}
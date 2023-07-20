#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    //Take User Input for Size

    int userHeight;
    do
    {
        userHeight = get_int("Enter height: ");
    }
    while (userHeight <= 0 || userHeight > 8);

    //Define variables for row, space and column related to the pyramids
    int row;
    int space;
    int column;

    //Loop for pyramids
    for (row = 0; row < userHeight; row++)
    {
        for (space = 0; space < userHeight - row - 1; space++) 
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("  ");
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }

}
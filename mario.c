#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("How high should the pyramid be?\n");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        //to build the left pyramid
        for (int j = 0; j < height; j++)
        {
            if (j >= height - 1 - i)
            {
                printf("#"); //print a "#" only if the column is greater than the inputted height - the row counter i - 1
            }
            else
            {
                printf(" "); //otherwise print a blank space
            }
        }

        printf("  "); //two spaces inbetween the pyramids

        //to build the right pyramid
        for (int k = 0; k < height; k++)
        {
            if (k <= i)
            {
                printf("#"); //print a "#" only if the column is less than or equal to the row counter
            }
            else
            {
                printf(""); //otherwise print a blank space
            }
        }
        printf("\n");
    }
}

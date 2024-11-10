//
// Created by defre on 2/19/2024.
//
#include <stdio.h>

int main(void)
{
    while(1)
    {
        int x = 0, polynomial = 0;
        printf("Please enter an x value for the following polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6: ");
        scanf("%d", &x);
        polynomial = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*(x) - 6;
        printf("The polynomial is equal to: %d\n", polynomial);
    }
}
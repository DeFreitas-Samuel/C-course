//
// Created by defre on 2/20/2024.
//

#include <stdio.h>

int main(void)
{
    while(1)
    {
        int twentyAmount = 0, tenAmount = 0, fiveAmount = 0, oneAmount = 0, input=0;
        printf("Please introduce an amount: ");
        scanf("%d", &input);

        twentyAmount = input / 20;
        input = input - (twentyAmount * 20);
        tenAmount = input / 10;
        input = input - (tenAmount * 10);
        fiveAmount = input/5;
        input = input - (fiveAmount * 5);
        oneAmount = input / 1;

        printf("20$ bills: %d, 10$ bills: %d, 5$ bills: %d, 1$ bills: %d\n", twentyAmount, tenAmount, fiveAmount, oneAmount);
    }
}
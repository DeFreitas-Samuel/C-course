//
// Created by defre on 2/19/2024.
//

#include <stdio.h>

int main(void)
{
    float amount = 0.0f;
    printf("Please introduce the amount you want to calculate the tax of: ");
    scanf("%f", &amount);
    amount = amount * 1.05f;

    printf("Your amount with tax is: %.1f", amount);
    return 0;
}
//
// Created by defre on 11/10/2024.
//
#include <stdio.h>

int main(void) {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    int first_sum, second_sum, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);

    first_sum = d1 + d3 + d5 + d7 + d9 + d11;
    second_sum = d2 + d4 + d6 + d8 + d10;
    total = 9 - ((((first_sum * 3) + second_sum) - 1) % 10);
    printf("The check digit is: %d", total);
    return 0;
}
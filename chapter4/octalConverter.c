//
// Created by defre on 11/10/2024.
//
#include <stdio.h>

int main(void) {
    int decimalToBeConverted;
    int firstOctalNumber;
    int secondOctalNumber;
    int thirdOctalNumber;
    int fourthOctalNumber;
    int fifthOctalNumber;
    printf("Enter a number between 0 and 32767 :");
    scanf("%d", &decimalToBeConverted);
    firstOctalNumber = decimalToBeConverted % 8;
    decimalToBeConverted = decimalToBeConverted / 8;
    secondOctalNumber = decimalToBeConverted % 8;
    decimalToBeConverted = decimalToBeConverted / 8;
    thirdOctalNumber = decimalToBeConverted % 8;
    decimalToBeConverted = decimalToBeConverted / 8;
    fourthOctalNumber = decimalToBeConverted % 8;
    decimalToBeConverted = decimalToBeConverted / 8;
    fifthOctalNumber = decimalToBeConverted % 8;
    decimalToBeConverted = decimalToBeConverted / 8;


    printf("The number converted to base 8 is: %d%d%d%d%d", fifthOctalNumber, fourthOctalNumber, thirdOctalNumber, secondOctalNumber, firstOctalNumber);


    return 0;
}
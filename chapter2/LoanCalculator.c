//
// Created by defre on 2/24/2024.
//
#include <stdio.h>

int main(void)
{
    float loanAmount = 0.0f, annualRate = 0.0f, monthlyPayment = 0.0f;
    printf("Introduce the loan amount: ");
    scanf("%f", &loanAmount);
    printf("Introduce the annual interest rate: ");
    scanf("%f", &annualRate);
    printf("Introduce the monthly payment: ");
    scanf("%f", &monthlyPayment);

    float monthlyInterestRate = annualRate / 12.0f / 100.0f;

    float balanceAfterFirstPayment = (loanAmount * (1.0f + monthlyInterestRate)) - monthlyPayment;
    float interestOfFirstPayment = loanAmount * monthlyInterestRate;

    float balanceAfterSecondPayment = (balanceAfterFirstPayment * (1.0f + monthlyInterestRate)) - monthlyPayment;
    float interestOfSecondPayment = balanceAfterFirstPayment * monthlyInterestRate;

    float balanceAfterThirdPayment = (balanceAfterSecondPayment * (1.0f + monthlyInterestRate)) - monthlyPayment;
    float interestOfThirdPayment = balanceAfterSecondPayment * monthlyInterestRate;

    printf("The remaining first balance is: %.2f and from that balance %.2f comes from interests\n", balanceAfterFirstPayment, interestOfFirstPayment);
    printf("The remaining second balance is: %.2f and from that balance %.2f comes from interests\n", balanceAfterSecondPayment, interestOfSecondPayment);
    printf("The remaining third balance is: %.2f and from that balance %.2f comes from interests\n",balanceAfterThirdPayment, interestOfThirdPayment);

    return 0;
}
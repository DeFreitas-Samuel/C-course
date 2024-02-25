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

    float monthlyInterestRate = annualRate / 12.0f;

    float firstMonthlyPayment = (loanAmount - monthlyPayment) * (1.0f + (monthlyInterestRate / 100.0f));
    float interestOfFirstPayment = (loanAmount - monthlyPayment) * (monthlyInterestRate / 100.0f);

    float secondMonthlyPayment = (firstMonthlyPayment - monthlyPayment) * (1.0f + (monthlyInterestRate / 100.0f));
    float interestOfSecondPayment = (firstMonthlyPayment - monthlyPayment) * (monthlyInterestRate / 100.0f);

    float thirdMonthlyPayment = (secondMonthlyPayment - monthlyPayment) * (1.0f + (monthlyInterestRate / 100.0f));
    float interestOfThirdPayment = (secondMonthlyPayment - monthlyPayment) * (monthlyInterestRate / 100.0f);

    printf("The remaining first balance is: %.2f and from that balance %.2f comes from interests\n",firstMonthlyPayment, interestOfFirstPayment);
    printf("The remaining second balance is: %.2f and from that balance %.2f comes from interests\n",secondMonthlyPayment, interestOfSecondPayment);
    printf("The remaining third balance is: %.2f and from that balance %.2f comes from interests\n",thirdMonthlyPayment, interestOfThirdPayment);



    return 0;
}
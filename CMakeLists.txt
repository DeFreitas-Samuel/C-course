cmake_minimum_required(VERSION 3.23)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled main.c )
add_executable(PrintMark PrintMark.c )
add_executable(SphereVolume SphereVolume.c )
add_executable(TaxCalculator TaxCalculator.c )
add_executable(Polynomial Polynomial.c )
add_executable(Polynomial_horner_rule Polynomial_horner_rule.c)
add_executable(BillDivider BillDivider.c)
add_executable(LoanCalculator LoanCalculator.c)
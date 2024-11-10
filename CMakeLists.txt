cmake_minimum_required(VERSION 3.23)
project(untitled C)

set(CMAKE_C_STANDARD 99)

# Create a separate executable for each .c file without including other files.
add_executable(PrintMark chapter2/PrintMark.c)
add_executable(SphereVolume chapter2/SphereVolume.c)
add_executable(TaxCalculator chapter2/TaxCalculator.c)
add_executable(Polynomial chapter2/Polynomial.c)
add_executable(Polynomial_horner_rule chapter2/Polynomial_horner_rule.c)
add_executable(BillDivider chapter2/BillDivider.c)
add_executable(LoanCalculator chapter2/LoanCalculator.c)

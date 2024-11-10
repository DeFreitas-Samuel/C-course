//
//Created by defre on 2/17/2024.
//Write a program that computes the volume of a sphere with a 10-meter radius, using the formula
//v = 4/3 * pi * r^2. Write the fraction 4/3 as 4 . 0 f / 3 . 0 f . (Try writing it as 4 / 3 . What happens?)
//Hint: C doesn't have an exponentiation operation, so you'll need to multiply r by itself
// twice to compute r^2
//

#include <stdio.h>
#define PI 3.1416f
#define RATIO 4.0f/3.0f

int main(void)
{
    while(1)
    {
        float radius = 0.0f;
        printf("Please introduce the radio of the sphere you want to calculate the volume of: ");
        scanf("%f", &radius);
        radius = radius * radius * radius;
        float volume = radius * PI * RATIO;
        printf("The volume of the sphere is: %f\n", volume);
    }
    return 0;
}
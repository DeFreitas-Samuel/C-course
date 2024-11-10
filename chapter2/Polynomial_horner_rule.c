//
// Created by defre on 2/20/2024.
//

#include <stdio.h>

int main(void)
{
    while(1)
    {
        int x = 0, polynomial = 0;
        printf("Please introduce x for the following polynomial: (((((3x+2)x-5)x-1)x+7)x-6:  ");
        scanf("%d",&x);
        polynomial = ((((3*x+2)*(x)-5)*(x)-1)*(x)+7)*(x)-6;
        printf("%d\n", polynomial);
    }
}
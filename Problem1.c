//
//  Project Euler 1 - Multiple of 3 and 5.c
//  
//
//  Created by Antoine on 07/06/2019.
//

/*
 PROBLEM 1 - MULTIPLE OF 3 AND 5:
 If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 
 Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <stdio.h>

int main(void)
{
    int n = 1000;
    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    
    printf("If we add up all multiples of 3 or 5 up to %i, we get %i\n", n, sum);
}

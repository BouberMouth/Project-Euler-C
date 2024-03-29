//
//  Problem2.c
//  
//
//  Created by Antoine on 07/06/2019.
//
/*
 PROBLEM 2 - EVEN FIBONACCI NUMBERS:
 Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
 
 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 
 By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
 */

#include <stdio.h>


int main(void)
{
    int limit = 4000000;
    int n1 = 0;
    int n2 = 1;
    int sum = 0;
    
    while (n2 <= limit)
    {
        int next = n1 + n2;
        
        if (next % 2 == 0)
        {
            sum += next;
        }
        
        n1 = n2;
        n2 = next;
    }
    
    printf("By adding all even Fibonacci numbers up to %i, we get: %i\n", limit, sum);
}

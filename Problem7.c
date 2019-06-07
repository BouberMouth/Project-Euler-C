//
//  Problem7.c
//  
//
//  Created by Antoine on 08/06/2019.
//

/*
 PROBLEM 7 - 10 001st PRIME NUMBER:
 By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 
 What is the 10 001st prime number?
 */

#include <stdio.h>
#include <stdbool.h>

bool isPrime(long n);

int main(void)
{
    int limit = 10001;
    int primeFound = 1;
    long numberToCheck = 1;
    
    while (primeFound < limit)
    {
        numberToCheck += 2;
        if (isPrime(numberToCheck))
        {
            primeFound += 1;
        }
        
    }
    
    printf("If we listed the first %i prime numbers, the highest would be %li.\n", limit, numberToCheck);
}

bool isPrime(long n)
{
    if (n <= 1)
    {
        return false;
    }
    
    if (n == 2 || n == 3 || n == 5)
    {
        return true;
    }
    
    if (n % 2 == 0)
    {
        return false;
    }
    
    for (long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    
    return true;
}

//
//  Problem10.c
//  
//
//  Created by Antoine on 08/06/2019.
//

/*
 PROBLEM 10: SUMMATION OF PRIMES:
 The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 
 Find the sum of all the primes below two million.
 */

#include <stdio.h>
#include <stdbool.h>

bool isPrime(long n);

int main(void)
{
    int limit = 2000000;
    long sum = 2;
    
    for (int i = 3; i < limit; i += 2)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    
    printf("The sum of all prime numbers below %i is %li\n", limit, sum);
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

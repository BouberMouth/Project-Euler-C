//
//  Problem7.c
//  
//
//  Created by Antoine on 08/06/2019.
//

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

//
//  Problem3.c
//  
//
//  Created by Antoine on 07/06/2019.
//

/*
 PROBLEM 3 - LARGEST PRIME FACTOR :
 The prime factors of 13195 are 5, 7, 13 and 29.
 
 What is the largest prime factor of the number 600851475143 ?
 */

#include <stdio.h>

int isPrime(long n);

int main(void)
{
    long n = 600851475143;
    long largest_prime = 0;
    long tmp[2];
    
    for (long i = 2; i * i < n; i++)
    {
         if (n % i == 0) //Check for factors of N
         {
             tmp[0] = i;
             tmp[1] = n / i;
             
             for (int j = 0; j < 2; j++)
             {
                 int isPrime = 1;
                 for (long k = 2; k * k <  tmp[j]; k++) {
                     if (tmp[j] % k == 0) {
                         isPrime = 0;
                         break;
                     }
                 }
                 if (isPrime == 1 && tmp[j] > largest_prime)
                 {
                    largest_prime = tmp[j];
                 }
             }
         }
    }
    printf("The highest prime factor of %li is %li\n", n, largest_prime);
}

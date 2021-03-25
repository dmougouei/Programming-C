//
//  Prime.c
//  Code-Sample
//
//  Created by Davoud on 11/3/21 based on
// https://codeforwin.org/2015/06/c-program-to-find-all-prime-factors-of-any-number.html

#include "Exercise1.h"
#include <stdio.h>
#include <stdbool.h>

void checkPrime(int number){
    bool isPrime = 0;
    int factors[100];
    int factorCounter= 0;
        /* Find all Prime factors */
    if(number>1){
        for(int i=2; i<=number; i++)
        {
            /* Check 'i' for factor of num */
            if(number%i==0)
            {
                /* Check 'i' for Prime */
                isPrime = 1;
                for(int j=2; j<=i/2; j++)
                {
                    if(i%j==0)
                    {
                        isPrime = 0;
                        break;
                    }
                }
                /* If 'i' is Prime number and factor of num */
                if(isPrime== 1)
                {
                    factors[factorCounter++] = i;
                }
            }
        }
    printf("The prime factors of %d are: \n{", number);
    for(int c=0;c<factorCounter;c++){
        c == factorCounter-1? printf("%d", factors[c]) : printf("%d,", factors[c]);
    }
    printf("}\n");
    } else{
        printf("Invalid input\n");
    }
}
int Exercise1_run (int number){
    checkPrime(number);
    return 0;
}

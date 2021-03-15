//
//  main.c
//  Test
//
//  Created by Davoud on 12/3/21.
//

#include <stdio.h>
 

#include<stdio.h>

void checkPrime(int n){
    int count;

    if(n<=2){
        printf("Invlid Input");
    }
    else {

    printf("the prime factors are:");

        while(n%2==0){ /* this will print the number of times two goes into the given number*/

            printf("%d\n",2);
            n=n/2;
        }
        /* now have odd number*/
        for(count=3; count<n/2 ;count++){

        while(n%count==0) {
            printf("%d\n",count);
            n=n/count;
        }
        }
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    checkPrime(120);
    //printf("Hello, World!\n");
    return 0;
}

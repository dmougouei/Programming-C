//
//  main.c
//  Code
//
//  Created by Davoud on 11/3/21.
//

#include <stdio.h>

#include "Lecture1.h"
#include "Lecture2.h"
#include "Lecture3.h"

#include "Tute2.h"

#include "Exercise1.h"

int lecture1_run(void);
int lecture2_run(void);
int lecture3_run(void);

void tute2_run(void);

int exercise1_run(int);

void someFunction(void);// prototype, declaration

int main(int argc, const char * argv[]) {
    exercise1_run(56);
    lecture3_run();
    return 0;
}
void someFunction(void){// define, implementing
    printf("someFunctionTest\n");
}


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

#include "Tutorial2.h"
#include "Tutorial4.h"
#include "Tutorial5.h"


#include "Exercise1.h"
#include "Exercise2.h"
#include "Exercise3.h"

//#include "Assignment1.h"


int lecture1_run(void);
int lecture2_run(void);
int lecture3_run(void);

int Tutorial2_run(void);
int Tutorial4_run(void);
int Tutorial5_run(void);


int Exercise1_run(int);
int Exercise2_run(void);
int Exercise3_run(void);

//int Assignment1_run(void);



int main(int argc, const char * argv[]) {
    Exercise3_run();
    //Assignment1_run();
    //Tutorial5_run();
    return 0;
}

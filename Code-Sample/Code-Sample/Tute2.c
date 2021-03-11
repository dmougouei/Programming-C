//
//  Tute2.c
//  Code-Sample
//
//  Created by Davoud on 11/3/21.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "Tute2.h"
// -----------------------------------------------------------------------
void arraySum (int *x, int *y, int *z, int size){
    for (int i=0; i<size; i++){
        z[i] = x[i] + y[i];
    }
}
// -----------------------------------------------------------------------
int tute2_run(void) {
    int x[5] = { 4, 7, 2, 6, 5 };
    int y[5] = { 4, 7, 2, 6, 5 };
    int z [5];
    arraySum(x, y, z, 5);
//    for ( int i = 0; i < 5; i++ ) {
//       printf( "z[\%d] : %d\n", i, z[i]);
//    }
    return 0;
}


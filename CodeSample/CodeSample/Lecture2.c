//
//  Lecture2.c
//  Code
//
//  Created by Davoud on 11/3/21.
//

#include "Lecture2.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// -----------------------------------------------------------------------
int lecture2_run(int argc, const char * argv[]) {
    // types
    int age=20;
    unsigned int byteCounter=0;
    bool correctValue;
    double voltage, weight;
    float amplitude, frequency;
    char category ='C', keyPressed;
    
    //sizes
    printf("char size = %lu, Min=%d, Max=%d\n", sizeof(char),CHAR_MIN, CHAR_MAX);
    printf("int size = %lu, Min=%d, Max=%d\n", sizeof(int),INT_MIN, INT_MAX);
    printf("float size = %lu, Min=%e, Max=%e\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double size = %lu, Min=%e, Max=%e\n", sizeof(double), DBL_MIN, DBL_MAX);
    printf("bool size = %lu \n", sizeof(bool));
    
    // arrays
    int x[5] = { 4, 7, 2, 6, 5 };
    int y[5] = { 4, 7, 2, 6, 5 };
    
    int sum = 0;
    for (int i=0; i < 5; i++) {
        sum += x[i];
    }
    printf("sum: %d \n", sum);
    
    // 2-d arrays
    float matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // C-String -------------------------------------------------------------
    char name[16] = "Davoud";
    char family[] = "Mougouei";
    char current = name[0];
    int counter =0;
    // reimplement this using do-while
    while (current != '\0') {
        printf("%c,", current);
        current = name[++counter]; // pre-increment
    }
    
    printf("\nStrlen: %lu", strlen(name));
    
    strcat(name, " ");
    strcat(name,family);
    printf("\nStrCat: %s", name);
    
    printf("\nStrCmp: %s", strcmp(name,family) == 0? "Same" : "Different");
    strcpy(name,family);
    printf("\nStrCpy: %s", name);

    // Complex opertions
    printf("\n5-2-1= %d", 5-2-1);
    printf("\n-2 * -3/4\%%5 + -6 + 4= %d", -2 * -3/4%5 + -6 + 4);

    // define a function factorial, which takes n from the user and computes the factorial of n
    printf("\n\n");
    return 0;
}

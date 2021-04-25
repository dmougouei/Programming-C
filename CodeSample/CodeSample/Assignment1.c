//
//  Assignment1.c
//  Code-Sample
//
//  Created by Davoud on 26/3/21.
//

#include "Assignment1.h"
#include <stdio.h>
// -----------------------------------------------------------------------
void DetCalc (char * fineName){
    // read the vectors from the input file
    FILE *matrixStream;        /* a file stream variable */
    float matrix[3][3];
    float matrixTranspose[3][3];
    
    matrixStream = fopen(fineName, "r");
    if(matrixStream != NULL){
        for (int i=0; i< 3; i++){
            fscanf(matrixStream, "%f", &matrix[0][i]);
        }
        for (int i=0; i< 3; i++){
            fscanf(matrixStream, "%f", &matrix[1][i]);
        }
        for (int i=0; i< 3; i++){
            fscanf(matrixStream, "%f", &matrix[2][i]);
        }
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                printf("%.2f ", matrix[i][j]);
            }
            printf("\n");
        }
        float det=0;
        for(int i=0;i<3;i++)
        det = det + (matrix[0][i]*(matrix[1][(i+1)%3]*matrix[2][(i+2)%3] - matrix[1][(i+2)%3]*matrix[2][(i+1)%3]));
        printf("Determinant: %.2f \n", det);
        if(det<0){
            for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
                matrixTranspose[j][i] = matrix[i][j];
            }
            for (int i=0; i<3; i++) {
                for (int j=0; j<3; j++) {
                    printf("%.2f ", matrixTranspose[i][j]);
                }
                printf("\n");
            }
        }
    }
    else{
        printf("Could not open the matrix file");
    }
}

void test(){
    DetCalc("matrix1.txt");
    DetCalc("matrix2.txt");
}
// -----------------------------------------------------------------------
int Assignment1_run(void) {
    test();
    return 0;
}

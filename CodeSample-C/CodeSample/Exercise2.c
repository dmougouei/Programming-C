//
//  Exercise2.c
//  Code-Sample
//
//  Created by Davoud on 21/3/21.
//

#include "Exercise2.h"

void multiplyMatrices(float M1[][10], float M2[][10], int M1_rows, int M1_cols, int M2_rows, int M2_cols){
    if (!(M1_cols != M2_rows || M1_rows <=0 || M1_cols <= 0 || M2_rows <=0 || M2_cols <= 0)){
        float M3 [M1_rows][M2_cols];
        for(int i=0; i< M1_rows; i++){
            for(int j=0; j< M2_cols; j++ ){
                M3[i][j] =0;
            }
        }
        for(int i=0; i< M1_rows; i++){
            for (int j=0; j< M2_cols; j++){
                for (int k=0; k< M1_cols; k++){
                    M3[i][j] += M1[i][k] * M2[k][j];
                }
            }
        }
        for(int i=0; i< M1_rows; i++){
            for(int j=0; j< M2_cols; j++ ){
                printf("%.2f ", M3[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("Invalid Matrix Dimensions\n");
    }
    printf("\n");
}
int Exercise2_run (){
    float M1[10][10] = {{0.00,0.13,0.76,0.46},{0.53,0.22,0.05,0.68},{0.68,0.93,0.38,0.52}};
    float M2[10][10] = {{0.83,0.03,0.05,0.53,0.67},{0.01,0.38,0.07,0.42,0.69},{0.59,0.93,0.85,0.53,0.09},{0.65,0.42,0.70,0.91,0.76}};
    multiplyMatrices(M1,M2,3,4,4,5);
    return 0;
}

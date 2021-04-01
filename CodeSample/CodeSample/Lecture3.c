//
//  Lecture3.c
//  Code-Sample
//
//  Created by Davoud on 14/3/21.
//
#include "Lecture3.h"

typedef enum {RED, GREEN, BLUE, BLACK } Color;
typedef struct
{  int resistance;
   int tolerance;
} Resistor;

void testStructure (void){
    Resistor r1, r2;
    r1.resistance = 470;     /* 470 ohms */
    r1.tolerance = 5;        /* 5% */
    r2.resistance = r1.resistance;
    printf("%d\n", r2.resistance);
    return;
}
// ---------------------------------------------------------------
void testEnum(void){
    int input =0;
    Color newColor = 0;
    printf("------------------------------------\n");
    printf("Enter a number betbween 0 and 3 to select a color\n");
    printf("Enter -1 to exit\n");
    printf("------------------------------------\n");

    while(input!=-1){
        printf("Enter a number: ");
        scanf("%d",&input);
        newColor = (Color) input;
        int colorIntensity;
        switch(newColor)
        {
            case RED   : colorIntensity= 25; printf("You have selected RED with intensity %d\n", colorIntensity); break;
            case GREEN : colorIntensity= 40; printf("You have selected GREEN with intensity %d\n", colorIntensity);break;
            case BLUE  : colorIntensity= 73; printf("You have selected BLUE with intensity %d\n", colorIntensity); break;
            case BLACK  : colorIntensity= 80; printf("You have selected BLACK with intensity %d\n", colorIntensity); break;
            default    : colorIntensity= 0;  printf("You has not selected any color\n");
        }
    }
    printf("See you next time!\n\n");
}
// ---------------------------------------------------------------
float findMinArray(float marks[], int size)
{
  float min = marks[0];
  for(int i=1; i < size; i++ )
     if(min > marks[i]) min = marks[i];
  return min;
}
// ---------------------------------------------------------------
float findMaxArray(float* marks, int size)
{
  float max = marks[0];
  for(int i=1; i < size; i++ )
     if(max < marks[i]) max = marks[i];
  return max;
}
//----------------------------------------------------------------
float findMinMatrix(float matrix[][3], int rows)
{
  float min = matrix[0][0];
  for(int i=0; i < rows; i++)
   for(int j=0; j < 3; j++)
     if(min > matrix[i][j]) min = matrix[i][j];
  return min;
}

// ---------------------------------------------------------------
void floatArraySum (float *x, float *y, float *z, int size){
    if (size>0){
    for (int i=0; i<size; i++){
        z[i] = x[i] + y[i];
    }}else{printf("Error");}
}
// ---------------------------------------------------------------
int lecture3_run(void){
    float x[5] = { 4, 7, 2, 6, 5 };
    float y[5] = { 4, 7, 2, 6, 5 };
    float z [5];
    printf("Min: %.2f\n", findMinArray(x, 5));
    printf("Max: %.2f\n", findMaxArray(x, 5));
    
    //floatArraySum(x, y, z, 5);
    
    float matrix[3][3] = {{1,2,3},{-4,5,6},{7,8,9}};
    for ( int i = 0; i < 5; i++ ) {
       printf( "z[\%d] : %.2f\n", i, z[i]);
    }
    printf("Min of the matrix: %.2f\n", findMinMatrix(matrix,3));

    //testEnum();
    //testStructure();
//    printf("N: ");
//    int i ;
//    scanf("%d",&i);
//    int r = i%10;
//    printf("%d\n", r);
//    return 0;
    
//    printf("N: ");
//    int num ;
//    scanf("%d", &num);
//    int r = (num - (num/100) * 100)/10;
//    printf("%d", r);
   return 0;

}

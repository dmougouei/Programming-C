//
//  Lecture-1.c
//  Code
//
//  Created by Davoud on 11/3/21.
//

#include "Lecture1.h"
/* C program – convert distance  */
 
#include <stdio.h>
#define KMS_PER_MILE 1.609 /*conversion constant*/

int sqr(int n){
    return n*n;
}

float calculateArea (float width, float height)
{
       float  sqArea;                      /* the area of a square */
       sqArea = width * height;           /* calculate the area */
       return sqArea;
}

void func (){
    float x, y, tmp;
    printf("Input two numbers: ");
    scanf("%f%f", &x, &y);
    printf("Before swap: x=%.2f, y=%.2f\n", x, y);
    tmp=x;
    x=y;
    y= tmp;
    printf("After swap: x=%.2f, y=%.2f\n", x, y);
}

int lecture1_run(void)
{
    float miles, klms;
    /* Get the distance in miles */
    printf("Enter the distance in miles > ");
    scanf("%f", &miles);
    /* Convert the distance to kilometers */
    klms = KMS_PER_MILE * miles;
    /* Display the distance in kilometers */
    printf("That equals %.3f km\n\n", klms);
    
    // SQR ------------------------------------------------------
    int number;
    printf("SQR of > ");
    scanf("%d", &number);
    printf("SQR of %d is %d \n\n", number, sqr(number));
    
    // AREA ------------------------------------------------------
    float width, height;
    printf("Enter Width, Height in meters > ");
    scanf("%f%f", &width, &height);
    printf("Area: %.2f m^2\n\n", calculateArea(width,height));
    // nice ------------------------------------------------------
    func();
    return (0);
}

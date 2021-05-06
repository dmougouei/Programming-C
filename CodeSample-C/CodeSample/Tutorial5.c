//
//  Tutorial5.c
//  CodeSample
//
//  Created by Davoud on 28/3/21.
//

#include "Tutorial5.h"
#include <stdio.h>
#include <string.h>

void pointer1(){
    short int numOfDays;
    short int  *ptr1;
    numOfDays = 12;
    printf("numOfDays = %d\n", numOfDays);
    ptr1 = &numOfDays;
    *ptr1 = 31;
    printf("numOfDays = %d\n", numOfDays);
    printf("*ptr1 = %d\n", *ptr1);
}
// -------------------------------------------------
void pointer2(){
    int x=1,y=2,z=0,*p;
    p = &x;
    z = *p;
    p = &y;
    z += *p;
    printf("%d\n", z);
}
// -------------------------------------------------
void pointer3(){
    char  numCh = 25;
    int   numIn;
    float numFl;
    numIn = (int)numCh + 7;
    numFl = (float)numIn/2.0;
    
    char  *ptrCh = (char*) &numIn;   /*  convert int* into char*  */
    int   *ptrIn = (int*) &numCh;    /*  convert char* into int*  */
}
// -------------------------------------------------
void pointer4(){ // arrays and pointers
    int list[6];
    for(int i=0; i<6; i++)
    list[i] = 0;
    int *ptr = list; //ptr can now be accessed like an array
    ptr[3] = 7;
    for(int i=0; i<6; i++)
    printf("%d, ", * (ptr + i));// * (ptr + i) equals list[i]
    printf("\n");
    
}
// -------------------------------------------------
void pointer5( int *pFirst, int *pSecond )// swap
{
    int temp;
    temp = *pFirst;
    *pFirst = *pSecond;
    *pSecond = temp;
    printf("First: %d, Second: %d\n", *pFirst, *pSecond);
}
// -------------------------------------------------
char* pointer6 (char *input, char ch)// swap
{
    return strchr(input,ch);
}
// -------------------------------------------------
char* pointer7 (int i){// get month
    static char monthName[12][4] ={"Jan","Feb","Mar","Apr","May",
        "Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    return monthName[--i];
}
// -------------------------------------------------
void pointer8 (){// pointer to pointer
    float price;
    float *ptrFl;
    float **ptrPt;
    price = 34.0;
    ptrFl = &price;
    ptrPt = &ptrFl;
    printf("%.2f  %.2f  %.2f\n", price, *ptrFl, **ptrPt);
}
// -------------------------------------------------
void pointer9 (int *p, int size) {
    int total = 0;
    for (int k = 0; k < size; k++) {
        total += p[k];
    }
    printf("Total: %d\n", total);
}
// -------------------------------------------------
void pointer10(int *arr, int row, int col)   // 2D array
{
    for (int i=0; i<row; i++){
        for(int j=0 ; j<col; j++)
            printf("%d ", *((arr+i*col) + j));
        printf("\n");
    }
}
// -------------------------------------------------

int Tutorial5_run(void){
    //int first = 2;
    //int second = 3;
    //pointer5(&first,&second);
    
    //printf("%s\n", pointer6("Test",'e'));
    
    //printf("%s\n", pointer7(3));
    
    //int a[5] = {100, 220, 37, 16, 98};
    //pointer9(a,5);
    
    int arr[3][4] = {
        {11,22,33,44},
        {55,66,77,88},
        {11,66,77,44}
    };
    pointer10(arr,3,4);
    return 0;
}

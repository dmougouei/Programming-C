//
//  Tutorial4.c
//  Code-Sample
//
//  Created by Davoud on 21/3/21.
//
// for basic examples see https://www.guru99.com/c-file-input-output.html

#include "Tutorial4.h"
#include <stdio.h>
#include <unistd.h>

int writeFile(){
    FILE *salesReport;        /* a file stream variable */
    char date[] = "24/09/2006";           /* a c-string */
    char fileName[] = "sales.txt"; /* a c-string */
    char model[] = "FinePix S3000";       /* a c-string */
    salesReport = fopen(fileName, "w" ); // open for writing, overwriting a file
    if(salesReport == NULL ) /*check for file open errors*/
    {
        fprintf(stderr, "Error opening %s", fileName);
        return -1;  /* terminate the program */
    }
    else
    {
        /* write data to the file */
        for(int i=0; i<40; i++) fprintf(salesReport, "-");
        fprintf(salesReport, "\nDate: %s\n", date);
        for(int i=0; i<40; i++) fprintf(salesReport, "-");
        fprintf(salesReport, "\n%-27s%s", "Model :", model );
        fprintf(salesReport, "\n%-27s%d", "Number of items sold:",3 );
        fprintf(salesReport, "\n%-27s%.2f", "Gross amount:", 1200.0 );
        fprintf(salesReport, "\n%-27s%.2f", "GST Paid:", 120.0 );
        fprintf(salesReport, "\n%-27s%.2f", "Net sale:", 1080.0 );
        fclose(salesReport);    /* close the file stream */
        return 0;
    }
}
// ---------------------------------------------------------
int readFile(void){
    FILE *salesReport;        /* a file stream variable */
    char fileName[] = "sales.txt"; /* a c-string */
    char chunk[100];
    salesReport = fopen(fileName, "r" ); // open for reading and writing, overwriting a file
    if(salesReport == NULL ) /*check for file open errors*/
    {
        fprintf(stderr, "Error opening %s", fileName);
        return -1;  /* terminate the program */
    }
    else
    {
        while(fgets(chunk, sizeof(chunk), salesReport) != NULL) {
            printf("%s", chunk);
        }
        printf("\n");
        return 0;
    }
}
// ---------------------------------------------------------
int Tutorial4_run(void){
    writeFile();
    readFile();
    printf("\n");
    return 0;
}
//----------------------------------------
//Date: 24/09/2006
//----------------------------------------
//Model :                    FinePix S3000
//Number of items sold:      3
//Gross amount:              1200.00
//GST Paid:                  120.00
//Net sale:                  1080.00

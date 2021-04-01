//
//  Exercise3.c
//  CodeSample
//
//  Created by Davoud on 26/3/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void VectorOperations (int size){
    if (size>0){
        float dotproduct =0, max =0;
        float x[size], y[size];
        for (int i=0; i< size; i ++){
            x[i] =y[i] =0;
        }
        // read the vectors from the input file

        FILE *vectors;        /* a file stream variable */
        char inputFile[] = "vectors.txt"; /* a c-string */
        char outputFile[] = "results.txt"; /* a c-string */

        vectors = fopen(inputFile, "r" ); // open for reading and writing, overwriting a file

        if(vectors != NULL ) /*check for file open errors*/
        {
            for (int counter =0; counter < size ; counter++ )
            {
                fscanf(vectors, "%f", &x[counter]);
            }
            for (int counter =0; counter < size ; counter++ )
            {
                fscanf(vectors, "%f", &y[counter]);
            }
            max = x[0];
            for (int i=0; i<size; i++){
                if (x[i]> max) max = x[i];
                if (y[i]> max) max = y[i];
                dotproduct += x[i] * y[i];
                // dotproduct =  (x[1] * y[1]) + (x[2] * y[2]) + ... + (x[size-1]*y[size-1])
            }
            fclose(vectors);

            // write the answer in the output file

            vectors = fopen(outputFile, "w" ); // open for writing, overwriting a file
            if(vectors != NULL ) /*check for file open errors*/
            {
                /* write data to the file */
                char operations[] = "Dot Product and Maximum";
                for(int i=0; i<40; i++) fprintf(vectors, "-");
                fprintf(vectors, "\nOperations: %s\n", operations);
                for(int i=0; i<40; i++) fprintf(vectors, "-");
                fprintf(vectors, "\n%s%.2f, %s%.2f\n", "Dot Product: ", dotproduct, "Maximum: ", max);
                fclose(vectors);
            }
            else
            {
                fprintf(stderr, "Error opening %s", outputFile);
            }
        }
        else
        {
            fprintf(stderr, "Error opening %s", inputFile);
        }}else{printf("Invalid Size\n");}
}

//-----------------------------------------------------------------------
void Exercise3_test1(int size){
    VectorOperations(size);
    FILE *vectors;
    char inputFile[] = "results.txt";
    char chunk[100];
    vectors = fopen(inputFile, "r" );
    if(vectors != NULL )
    {
        fgets(chunk, sizeof(chunk), vectors);
        printf("%s", chunk);
        fgets(chunk, sizeof(chunk), vectors);
        printf("%s", chunk);
        fgets(chunk, sizeof(chunk), vectors);
        printf("%s", chunk);
        fclose(vectors);
    }
    else
    {
        fprintf(stderr, "Error opening %s", inputFile);
    }
}
// -----------------------------------------------------------------------
void Exercise3_test2(int size){
    VectorOperations(size);
    FILE *vectors;
    char inputFile[] = "results.txt";
    char chunk[100];
    vectors = fopen(inputFile, "r" );
    if(vectors != NULL )
    {
        fgets(chunk, sizeof(chunk), vectors);
        printf("%s", chunk);
        fgets(chunk, sizeof(chunk), vectors);
        printf("%s", chunk);
        fgets(chunk, sizeof(chunk), vectors);
        printf("%s", chunk);
        fgets(chunk, sizeof(chunk), vectors);
        printf("%s", chunk);
        fclose(vectors);
    }
    else
    {
        fprintf(stderr, "Error opening %s", inputFile);
    }
}
// -----------------------------------------------------------------------
void Exercise3_test3(int size){
    VectorOperations(size);
    FILE *vectors;
    char inputFile[] = "results.txt";
    char chunk[100];
    vectors = fopen(inputFile, "r" );
    if(vectors != NULL )
    {
        fgets(chunk, sizeof(chunk), vectors);
        fgets(chunk, sizeof(chunk), vectors);
        fgets(chunk, sizeof(chunk), vectors);
        fgets(chunk, sizeof(chunk), vectors);
        fgets(chunk, sizeof(chunk), vectors);

        printf("%s", chunk);
        fclose(vectors);
    }
    else
    {
        fprintf(stderr, "Error opening %s", inputFile);
    }
}

// -----------------------------------------------------------------------
void Exercise3_test4(){
    VectorOperations(-2);
}

int Exercise3_run(void) {
    Exercise3_test2(5);
    //Exercise3_test2(5);
    //Exercise3_test3();
    return 0;
}

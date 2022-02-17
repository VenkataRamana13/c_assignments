#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_DIE 6
#define BLOCK_SIZE 8333
 
int main(){
    srand((unsigned)time(NULL));    
    int die_count[11] = {0}; 

    for (int i = 0; i < (int)1e6; i++){
        int die_1 = rand() % NUM_DIE + 1;
        int die_2 = rand() % NUM_DIE + 1; 
        die_count [die_1 + die_2 - 2]++;
    }

    int count[11] = {0}; 
    printf ("\n"); 

    printf ("Histogram of die sum count(each block represents 8333 units)\n");
    printf ("\tfor total of a million rolls\n\n"); 
    for (int i = 0; i < 11; i++){
        count[i] = die_count[i]/BLOCK_SIZE;        
        printf ("%2d\2|", i + 2);
        for (int j = 0; j < count[i]; j++){
            printf ("%c", (char)254u); 
        } 
        printf ("\t(%d)\n", die_count[i]);
    }
    printf ("\n");
}
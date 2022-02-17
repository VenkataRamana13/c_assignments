#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_DIE 6
#define BLOCK_SIZE 8333
 
int main(){
    srand((unsigned)time(NULL));    
    int die = rand() % NUM_DIE + 1, die_count[6] = {0}; 

    for (int i = 0; i < (int)1e6; i++){
        int die = rand() % NUM_DIE + 1;
        die_count[die - 1]++; 
    }

    int count[6] = {0}; 
    printf ("\n"); 

    printf ("Histogram of die roll count(each block represents 8333 units)\n");
    printf ("\tfor total of a million rolls\n\n"); 
    for (int i = 0; i < 6; i++){
        count[i] = die_count[i]/BLOCK_SIZE;        
        printf ("%d |", i + 1);
        for (int j = 0; j < count[i]; j++){
            printf ("%c", (char)254u); 
        } 
        printf ("\t(%d)\n", die_count[i]);
    }
    printf ("\n");
}
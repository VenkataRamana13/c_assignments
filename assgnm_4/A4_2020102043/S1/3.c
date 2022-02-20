#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    long long N; 
    scanf("%lld",&N);
    long long DIV = 1e8;
    double x, y, d, pi;     //x, y coordinates, distance from centre, pi value
    int p = 0, q = 0;           //points inside circle, square

    srand((unsigned) time(NULL));        //seed random numbers

    for (int i = 0; i < N; i++){
        x = (double)((rand() % (2*DIV)) - DIV)/ DIV;       //gives a random point between -1 and 1
        y = (double)((rand() % (2*DIV))- DIV)/ DIV;       //gives a random point between -1 and 1

        if((x*x + y*y) <= 1) p++; 

        q++; 
    }

    pi = (double) 4 * p / q;
    
    printf("%lf\n", pi);
}
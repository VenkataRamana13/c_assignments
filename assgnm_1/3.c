#include <stdio.h>
#include <math.h>
int main(){
    int N, i;
    double sum; 
    printf("Enter integer N: ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        sum += sqrt(i);}
    printf("%f", sum);
}


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int N; scanf("%d", &N); 
    char a[N]; 
    gets(a); 
    int counts = 0; 
    for (int i = 0; i < N; i++){
        if (a[i] == '?'){
            counts++; 
        }
    }
    printf("%d\n", (counts+1)*(counts+1)); 
}


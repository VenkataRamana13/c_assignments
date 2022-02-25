#include <stdio.h>
int main(){
    int N, K; scanf("%d%d", &N, &K); 
    int a[N], b[N]; 
    for (int i = 0; i < N; i++){
        scanf("%d", &a[i]); 
    }
    for (int i = 0; i < N; i++){
        if (a[i] < 8)  b[i] = a[i]; 
        else b[i] = 8; 
    }
    int sum = 0;
    for (int i = 0; i < N; i++){
        sum += b[i]; 
        if (sum >= K){
            printf ("%d", i+1);
            break;}
    }
}

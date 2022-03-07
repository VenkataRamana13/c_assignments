#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int i = 0; 
void position(bool *, char *, int, int, int, int); 

int main(){
    int N; scanf("%d", &N); 
    char a[N]; 
    scanf("%s", a);
    bool b[2*N+1][2*N+1]; 
    int p = N + 1, q = N + 1, counts = 0; 
    position(&b[0][0], a, i, N, p, q); 
    for (int i = 0; i < 2*N + 1; i++){
        for (int j = 0; j < 2*N+1; j++){
            if (b[i][j] == true) counts++; 
        }
    }
    printf("%d\n", counts); 
}

void position(bool *b, char *a, int i, int N, int p, int q){
    if (i == N){ *(b + (2*N+1)*p + q) = true; return; }
    if (a[i] != '?'){
        if (a[i] == 'L') {q--; i++; position(b, a, i, N, p, q);}
        else if (a[i] == 'R') {q++; i++; position(b, a, i, N, p, q);}
        else if (a[i] == 'U') {p--; i++;  position(b, a, i, N, p, q);} 
        else if (a[i] == 'D') {p++; i++; position(b, a, i, N, p, q);}
    }
    else {
        i++; 
        position(b, a, i, N, p + 1, q);
        position(b, a, i, N, p - 1, q);
        position(b, a, i, N, p, q + 1);
        position(b, a, i, N, p, q - 1);
        }
}


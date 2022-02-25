#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){ 
    int n, m; scanf("%d%d", &n, &m);
    int a[n], b[m]; 
    int count = 0; 
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]); 
    }
    for (int i = 0; i < m; i++){
        scanf("%d", &b[i]); 
    }
    int i = 0, j = 0; 
    qsort(a, n, sizeof(int), cmpfunc);
    qsort(b, m, sizeof(int), cmpfunc);

    while(n > i && m > j){
        if (a[i] > b[j]) j++; 
        else if (a[i] < b[j]) i++; 
        else {
            ++count; i++; j++;
        }
    }
    printf ("%d\n", count); 
}

#include <stdio.h>
#include <stdlib.h>
int lowerIndex(int *, int, int); 
int upperIndex(int *, int, int); 
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main(){
    int N; scanf("%d", &N); 
    int c[N]; 
    for (int i = 0; i < N; i++){
        scanf("%d", &c[i]); 
    }
    int Q; scanf("%d", &Q); 
    int L[Q], R[Q]; 
    for (int i = 0; i < Q; i++){
        scanf("%d%d", &L[i], &R[i]); 
    }
    qsort (c, N, sizeof(int), cmpfunc);
    for (int i = 0; i < Q; i++){
        int count = 0;                 
        count = upperIndex(c, N, R[i]) - lowerIndex(c, N, L[i]) + 1; 
        printf("%d ", count); 
    }
    printf("\n"); 
}
int lowerIndex(int *arr, int n, int x)
{
    int l = 0, h = n - 1;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (arr[mid] >= x)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return l;
}
int upperIndex(int *arr, int n, int y)
{
    int l = 0, h = n - 1;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (arr[mid] <= y)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return h;
}

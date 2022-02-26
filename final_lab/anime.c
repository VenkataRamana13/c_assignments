#include <stdio.h>
#include <math.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int prime_factor(int n, int *a){
    int i = 1; 
    while (n % 2 == 0){
        a[i] = 2; 
        i++; 
        n /= 2; 
    }
    for (int j = 3; j < sqrt(n); j += 2){
        while(n % j == 0){
            a[i] = j; 
            i++; 
            n /= j;
        }
    }
    return i; 
}
int main(){
    int n; scanf("%d", &n); 
    int a[100]; a[0] = 1;
    int count = prime_factor(n, a);
    qsort(a, 100, sizeof(int), cmpfunc); 
    int p = 1, q = 1; 
    for (int i = 0; i < count/2; i++){
        if (i % 2) p *= (a[i] * a[count - i - 1]); 
            else q *= (a[i] * a[count - i - 1]); 
            }
        if (count % 2) p *= a[count/2]; 
        printf ("%d\n", p+q-2); 
        }

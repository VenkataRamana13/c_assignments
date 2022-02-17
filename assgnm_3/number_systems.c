/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : number_systems.c

* Purpose :

* Creation Date : 21-01-2022

* Last Modified : Sat 22 Jan 2022 12:36:54 PM IST

* Created By : Venkata Ramana

_._._._._._._._._._._._._._._._._._._._._.*/
#include <stdio.h>
int main(){
    int a; scanf("%d", &a);
    int N; scanf("%d", &N);
    int b[20]; int i = -1; 
    for(;;){
        b[++i] = N % a; 
        if (N == 0)
            break; 
        N /= a; 
    }
    for (int j = i - 1; j >= 0; j--){
        printf("%d", b[j]);
    }
    printf("\n");
}

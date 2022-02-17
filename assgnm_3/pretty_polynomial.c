/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : pretty_polynomial.c

* Purpose :

* Creation Date : 24-01-2022

* Last Modified : Mon 24 Jan 2022 02:31:30 PM IST

* Created By : Venkata Ramana

_._._._._._._._._._._._._._._._._._._._._.*/
#include <stdio.h>
int main(){
    int N; scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    for (int i = N - 1; i >= 0; i--){
        if (a[i] == 0)
            continue;
        if (i == 0){
            printf("%d\n", a[i]>0?a[i]:(-1*a[i]));
        }
        else if (i == 1){
            (a[i] == 1 || a[i] == -1) ? printf("x ") : printf("%dx ", a[i]>0?a[i]:(-1*a[i]));
        }
        else if (i == N-1){
            if(a[i] == 1 || a[i] == -1) {
                if(a[i] == 1)
                    printf("x^%d ", i);
                else
                    printf("-x^%d ", i);
            }
            else{
                printf("%dx^%d ", a[i], i);
            }
        }
        else{
            (a[i] == 1 || a[i] == -1) ? printf("x ") : printf("%dx^%d ", a[i]>0?a[i]:(-1*a[i]), i);
        }
        if (i != 0 && a[i - 1] < 0)
            printf("- " );
        if (i != 0 && a[i - 1] >= 0)
            printf("+ ");
    }
}

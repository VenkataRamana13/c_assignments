/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : pretty_please.c

* Purpose :

* Creation Date : 24-01-2022

* Last Modified : Mon 24 Jan 2022 03:13:16 PM IST

* Created By : Venkata Ramana

_._._._._._._._._._._._._._._._._._._._._.*/
#include <stdio.h>
void calculate_differential(int *, int *, int);
void pretty_print(int *, int);
int main(){
    int N; scanf("%d", &N);
    int a[N - 1], b[N]; 
    for (int i = 0; i < N; i++){
        scanf("%d", &b[i]);
    }
   // calculate_differential(b, a, N);
    pretty_print(b, N);
/*    for (int i = N - 2; i >= 0; i--){
        int j = a[i]<0?-a[i]:a[i];
        if (a[i] == 0)
            continue;
        if (i == N-1){
            if (a[i] < 0){
                if (j == 1)
                    printf("-x^%d ", i);
                else printf("-%dx^%d ", j, i);}
            else{
                if (j == 1) printf("x^%d ", i);
                else printf("%dx^%d ", j, i);}
        }
        else if (i == 1){
            if (a[i] < 0){
                if (j == 1) printf("- x ");
                else printf("- %dx ", j);}
            else{
                if (j == 1) printf("+ x ");
                else printf("+ %dx ", j);}
        }
        else if (i == 0){
            if (a[i] < 0){
                printf("- %d\n", j);}
            else{
                printf("+ %d\n", j);}
        }
        else{ 
            if (a[i] < 0){
                if (j == 1) printf("- x^%d ", i);
                else printf("- %dx^%d ", j, i);}
            else{ 
                if (j == 1) printf("+ x^%d", i);
                else printf("+ %dx^%d ", j, i);}
        }
    }*/
}
void calculate_differential(int *b, int *a, int N){
    for (int i = 0; i < N-1; i++){
        a[i] = b[i + 1]*(i + 1);
    }
}
void pretty_print(int *a, int N){
for (int i = N - 1; i >= 0; i--){
        int j = a[i]<0?-a[i]:a[i];
        if (a[i] == 0)
            continue;
/*        if (i == N-1){
            if (a[i] < 0){
                if (j == 1)
                    printf("-x^%d ", i);
                else printf("-%dx^%d ", j, i);}
            else{
                if (j == 1) printf("x^%d ", i);
                else printf("%dx^%d ", j, i);}
        }*/
        if (i == 1 && i != N - 1){
            if (a[i] < 0){
                if (j == 1) printf("- x ");
                else printf("- %dx ", j);}
            else{
                if (j == 1) printf("+ x ");
                else printf("+ %dx ", j);}
        }
        else if (i == 1 && i == N - 1){
            if (a[i] < 0){
                if (j == 1) printf("-x ");
                else printf("-%dx ", j);
            }
            else{
                if (j == 1) printf("x ");
                else printf("%dx ", j);
            }
        }
        else if(i == 0 && i != N - 1){
            if (a[i] < 0){
                printf("- %d\n", j);}
            else{
                printf("+ %d\n", j);}
        }
        else if (i == 0 && i == N - 1){
            if (a[i] < 0){
                printf("-%d\n", j); 
            }
            else{
                printf("%d\n", j);
            }
        }
        else if(i == N - 1 && i != 0 && i != 1){
            if (a[i] < 0){
                if (j == 1)
                    printf("-x^%d ", i);
                else printf("-%dx^%d ", j, i);}
            else{
                if (j == 1) printf("x^%d ", i);
                else printf("%dx^%d ", j, i);}
        
        }
        else{ 
            if (a[i] < 0){
                if (j == 1) printf("- x^%d ", i);
                else printf("- %dx^%d ", j, i);}
            else{ 
                if (j == 1) printf("+ x^%d", i);
                else printf("+ %dx^%d ", j, i);}
        }
    }
}


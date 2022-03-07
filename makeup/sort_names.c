#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool compare(char *, char *); 

int main(){
    int N; scanf("%d", &N); 
    char names[N][50], temp[50];  
    for (int i = 0; i < N; i++){
        scanf("%s[^\n]", names[i]); 
    }
    for (int i = 0; i < N + 1; i++){
        for (int j = i + 1; j < N + 1; j++){
            if (compare(names[i], names[j]) > 0){
                strcpy(temp, names[i]); 
                strcpy(names[i], names[j]); 
                strcpy(names[j], temp); 
            }
        }
    }
    for (int i = 0; i < N; i++){
        puts(names[i]); 
    }
}

bool compare(char *a, char *b){
    int i = 0, j = 0;
    for (;;){
        if (a[i] == ' ') continue;
        if (b[j] == ' ') continue; 
        if (a[i] >= 65 && a[i] <= 90){
            a[i] = a[i] + 32; 
        }
        if (b[i] >= 65 && b[i] <= 90){
            b[i] = b[i] + 32; 
        }
        if (a[i] == b[j]) continue;
        else {
            if (a[i] < b[j]) return false; 
            else return true; 
        }
        i++; j++; 
    }
}

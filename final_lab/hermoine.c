#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    int T; scanf("%d", &T); 
    bool truth[T]; 
    for (int i = 0; i < T; i++){
        int k; scanf("%d", &k); 
        int a[26], d[26]; 
        char ch[100001] = {0}; 
        gets(ch); 
        int p = 0;
        while(ch[p]){
            if (ch[p] == ' ') continue;
            int b = (ch[p] - 'a' + k) % 26;
            a[b]++;
            p++; 
        }
        p = 0;
        char ch2[100001] = {0};
        gets(ch2);
        while(ch2[p]){
            if (ch2[p] == ' ') continue; 
            int c = (ch2[p] - 'a');
            d[c]++; 
            p++;
        }
        for (int j = 0; j < 26; j++){
            if (a[i] != d[i]){
                truth[i] = false; 
                break;}
            truth[i] = true; 
        }
    }
    printf("\n"); 
    for (int i = 0; i < T; i++){
        if(truth[i]) printf("True\n"); 
        else printf("False\n"); 
    }
}

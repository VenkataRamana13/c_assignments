#include <stdio.h>
#include <stdbool.h>
void max_value(int, int, int);
int main(){
    int a, b, max;
    bool flag;
    printf("Enter the value of integers: ");
    scanf("%d%d", &a, &b);
    if (a == b){
        flag = true;}
    else{
    max_value(a, b, max);
    for(int i = 2; i <= max; i++){
        if(a % i == 0 && b % i == 0){ 
            flag = true; 
            break;} 
        else 
            flag = false;
    }}
    if(flag == false)
        printf("The given pair of integers is coprime.\n");
    else
        printf("They are not coprime.\n");
}
void max_value(int a, int b, int max){
    max = (a > b ? a : b);
}



#include <stdio.h>
int main(){
    int num, rows; 
    printf("Enter the value of integer and the number of rows: ");
    scanf("%d%d", &num, &rows);
    int i = 0;
    loop: 
    i++; 
    printf("%d x %d = %d\n", num, i, num*i);
    if(i < rows)
        goto loop;
   
}

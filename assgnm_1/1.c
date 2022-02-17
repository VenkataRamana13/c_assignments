#include <stdio.h>
void set_order(int, int, int);
int main(){
    int a, b, c;
    printf("Enter the value of the three integers(in increasing order):  ");
    scanf("%d%d%d", &a, &b, &c);
    if (c*c == (a*a + b*b))
        printf("They form pythagorean triplets.\n");
    else
        printf("They do not form pythagorean triplets.\n");
}


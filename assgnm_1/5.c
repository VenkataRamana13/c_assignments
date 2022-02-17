#include <stdio.h>
int main(){
    float a[2], b[2];
    printf("Enter the components of first vector(with a space in between): ");
    scanf("%f%f", &a[0], &a[1]);
    printf("Enter the components of second vector: ");
    scanf("%f%f", &b[0], &b[1]);
    printf("The dot product of the 2 vectors is: %f\n", a[0]*b[0] + a[1]*b[1]);
}

#include <stdio.h>
#define PASS_MARK 35
float pass_students(int [], int);
int main(){
    printf("Enter the number of students: ");
    int N;
    scanf("%d", &N);
    int students[N], i = 0;
    printf("Enter the marks of the students: ");
    for(;i < N; i++){
        scanf("%d", &students[i]);
    }
    //part a
    printf("%.2f%% is the pass percentage. \n", pass_students(students, N)*100);
}
   
float pass_students(int a[], int N){
    int j = 0;
    for(int i = 0; i < N; i++){
        if(a[i] > PASS_MARK)
            j++;
        }
    return (float)j/N;
}


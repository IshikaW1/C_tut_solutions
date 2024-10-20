#include <stdio.h>
int main() {
    int num, e1=0, e2=1, temp;
    printf("Enter the number of Fibonacci terms to display: ");
    scanf("%d", &num);
    if (num<=0){
        printf("Please enter a positive integer. ");
        return 1;
    }
    if (num>=1){
        printf("\n%d", e1);
    }
    if (num>=2){
        printf("\n%d", e2);
    }
    for (int i=3; i <= num; i++){
        temp=e1+e2;
        printf("\n%d", temp);
        e1=e2;
        e2=temp;
    }
    return 0;

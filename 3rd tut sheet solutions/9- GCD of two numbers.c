#include <stdio.h>
void main(){
    int num1, num2, gcd;
    printf("Enter num 1: ");
    scanf("%d", &num1);
    printf("Enter num 2: ");
    scanf("%d", &num2);
    //finding GCD
    int max;
    int min=(num1<num2)?num1:num2;
    for(int i=1; i<=min; i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    printf("GCD = %d", gcd);
}

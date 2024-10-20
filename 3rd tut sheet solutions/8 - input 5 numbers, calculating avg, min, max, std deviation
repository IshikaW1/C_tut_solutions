#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
    int num1, num2, num3, num4, num5, max, min;
    float avg, stddev;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    printf("Enter 3rd number: ");
    scanf("%d", &num3);
    printf("Enter 4th number: ");
    scanf("%d", &num4);
    printf("Enter 5th number: ");
    scanf("%d", &num5);
    //mean
    printf("\nAvg= %f", (num1+num2+num3+num4+num5)/5.0);
    //array from given numbers
    int arr[5]={num1, num2, num3, num4, num5};
    //maximum value
    max=arr[0];
    for (int i=1; i<5; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("\nMax= %d", max);
    //minimum value
    min=arr[0];
    for (int i=1; i<5; i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nMin= %d", min);
    //STANDARD DEVIATION CALCULATION:
    //we have mean
    //calculating variance
    int sum=0;
    for (int i=0; i<5; i++){
        float tempvar= pow(arr[i]-avg,2);
        sum+=tempvar;
    }
    printf("\n%ld", sum);
    stddev=sqrt(sum/5);
    printf("\nStandard Deviation= %f", stddev);
    
    return 0;
}

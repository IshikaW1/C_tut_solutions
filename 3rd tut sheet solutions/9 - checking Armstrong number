#include <stdio.h>
int main() {
    //input number
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    //to get the no. of digits in the no. aka order
    int length=0;
    //storing original num for comparison later
    int originalnum=num;
    while (num!=0){
        num/=10;
        length++;
    }
    //reseting num to original num
    num=originalnum;
    //calculating...
    int order=length, result=0;
    while(num!=0){
        int rem=num%10, mul=1;
        while (order!=0){
            mul=mul*rem;
            order--;
        }
        result+= mul;
        order = length;
        num=num/10;
    }
    //checking if the calculated no. id equal to the input or not
    if (originalnum==result){
        printf("Entered number is an Armstrong number. ");
    }
    else{
        printf("Entered number is not an armstrong number. ");
    }
}

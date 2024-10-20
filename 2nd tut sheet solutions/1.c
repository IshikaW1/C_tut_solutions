#include <stdio.h>
#include <math.h>
int main(){
    double num,angle;
    printf("Enter the number: ");
    scanf("%lf", &num);
    printf("Enter the angle(in degrees):  ");
    scanf("%lf", &angle);
    
     // Demonstrating pow() function
    printf("Power: %.2f ^ 2 = %.2f\n", num, pow(num, 2));

    // Demonstrating sqrt() function
    printf("Square root of %.2f = %.2f\n", num, sqrt(num));

    //demonstrating log() function
    if (num>0){
        printf("log(%.2f)=%.2f", num, log(num));
    }
    else{
        printf("Logarithm is undefined for negative numbers.");
    }
    
    //converting degrees to radians
    double rad=angle*(M_PI/180.0);
    
    //demonstrating sin() function
    printf("\nsin(%.2f degrees)= %.2f", angle, sin(rad));
    
    //demonstrating cos() function
    printf("\ncos(%.2f degrees)= %.2f", angle, cos(rad));
    
    //demonstrating tan() function
    //in C, tan will give finite values where it should give inf, so we would print that separately using if statement for such angles
    if (fmod(angle,180)==90){
        printf("\ntan(%.2f) is undefined(approached infinity).");
    }
    else{
        printf("\ntan(%.2f degrees)= %.2f", angle, tan(rad));
    }

    return 0;
}

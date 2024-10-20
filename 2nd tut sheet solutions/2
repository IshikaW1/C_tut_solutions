#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c, D, root1, root2;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    D=pow(b,2)-4*a*c;
    if (D<0){
        printf("D is negative, hence no real solution.");
    }
    else{
        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2*a);
        printf("The two roots are: %.2f, %.2f", root1, root2);
    }
    return 0;
}

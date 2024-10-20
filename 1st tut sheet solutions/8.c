#include <stdio.h>
#include <math.h>
int main(){
  float r;
  printf("Enter the radius: ");
  scanf("%f", &r);
  printf("Area = %.2f", M_PI*pow(r,2));
}

#include <stdio.h>
#include <math.h>
int main(){
  int num, n;
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("Enter the value of N for Nth root of the entered number: ");
  scanf("%d", &n);
  printf("Nth root of entered number = %.2f", pow(num, 1.0/n));
  //note that if u write 1/n instead of 1.0/n, it would give wrong results...
}

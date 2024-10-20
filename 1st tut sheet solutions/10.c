#include <stdio.h>
#include <math.h>
int main(){
  float p,r,t,final_amount, ci;
  int n;
  //input from user
  printf("Enter Principal Amount: ");
  scanf("%f", &p);
  printf("Enter Rate of Interest: ");
  scanf("%f", &r);
  printf("Enter Time Period(in years): ");
  scanf("%f", &t);
  printf("Enter the number of times interest is compounded per year: ");
  scanf("%d", &n);
  
  //calculation of final amount
  final_amount= p*(pow((1+(r/n)), n*t));
  //calculation of compounded interest
  ci=final_amount-p;
  
  //output
  printf("Compund Interest= %.2f", ci);
  printf("\nFinal Amount= %.2f", p+ci);
  
  return 0;
}

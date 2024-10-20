#include <stdio.h>
int main(){
  int arr[6]={1,2,45,65,89,20};
  int size=6;
  float sum, avg;
  for (int i=0; i<size; i++){
    sum+=arr[i];
  }
  printf("Sum = %.2f", sum);
  printf("Avg = %.2f", sum/size);
  return 0;
}

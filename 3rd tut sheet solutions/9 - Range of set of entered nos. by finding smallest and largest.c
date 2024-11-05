#include <stdio.h>
void main(){
  int n;
  
  printf("How many numbers to be entered? ");
  scanf("%d", &n);
  float nums[n];
  for(int i=0; i<n; i++){
    printf("Enter num%d: ", i+1);
    scanf("%f", &nums[i]);
  }
  float max=nums[0], min=nums[0];
  for (int i=1; i<n; i++){
      if(nums[i]>max){
          max=nums[i];
      }
      else if(nums[i]<min){
          min=nums[i];
      }
  }
  printf("Max = %.2f\n", max);
  printf("Min = %.2f\n", min);
  printf("Range = %.2f\n", max-min);
  
}

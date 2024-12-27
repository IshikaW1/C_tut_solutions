#include <stdio.h>
#include <string.h>
void main(){
  int arr[]={2,3,5,77,89,1,3,9,0,3,56,0,1,23};
  int size=sizeof(arr)/sizeof(arr[0]);
  int newarr[size]; //max size of the new array would be the size of originl array
  int ns=0;
  for(int i=0; i<size; i++){
    int found=0;
    for(int j=0; j<ns; j++){
      if(arr[i]==newarr[j]){
        found=1;
        break;
      }
    }
    if(!found){
      newarr[ns++]=arr[i];
    }
  }
  for(int i=0; i<ns; i++){
      printf("\n%d", newarr[i]);
  }
}

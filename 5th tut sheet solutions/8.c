#include <stdio.h>
void main(){
    int arr[]={23, 78, 9, 0, -89, 88, 90, 45}; //initializing the array
    int largest=arr[0], smallest=arr[0];
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<length; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("Smallest element in the array = %d\nLargest element in the array = %d", smallest, largest);
}

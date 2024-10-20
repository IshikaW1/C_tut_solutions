#include <stdio.h>
int main() {
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int merged[10];
    for (int i=0; i<size1; i++){
        merged[i]=arr1[i];
    }
    for (int i=size1; i<size1+size2; i++){
        merged[i]=arr2[i-size1];
    }
    for (int i=0; i<size1+size2; i++){
        printf("\n%d", merged[i]);
    }
    return 0;
}

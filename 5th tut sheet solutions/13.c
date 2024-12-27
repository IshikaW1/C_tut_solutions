#include <stdio.h>
#include <string.h>
void main(){
    char arr[]="abcd";
    int length=strlen(arr);

    printf("Original array: %s\n", arr);

    for(int i=0; i<length; i++){

        char first=arr[0];
        for(int j=0; j<length-1; j++){
            arr[j]=arr[j+1];
        }
        arr[length-1]= first;

        printf("Rotation %d: ", i+1);

        for (int k=0; k<length; k++) {
            printf("%c", arr[k]);
        }
        printf("\n");
        
    }
}

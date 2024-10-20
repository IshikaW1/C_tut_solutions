#include <stdio.h>

int main()
{
    int arr[5]={11,2,34,67,15};
    int size=5;
    int revarr[5];
    int i;
    for (i=0; i<size; i++){
        revarr[i]=arr[size-i-1];
    }
    printf("Array after reversing the order of elements: ");
    for (i=0; i<size; i++){
        printf("\n%d", revarr[i]);
    }
    return 0;

}

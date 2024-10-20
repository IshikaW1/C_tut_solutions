#include <stdio.h>

int main()
{
    int arr[5]={11,2,34,67,15};
    int size=5, element;
    printf("Enter the element to be searched: ");
    scanf("%d", &element);
    int i;
    for (i=0; i<size; i++){
        if(arr[i]==element){
            printf("Element %d is FOUND at position %d", element, i+1);
            return 0;
        }
    }
    printf("Element not found!!");
    return 0;

}

#include <stdio.h>

int main()
{
    int arr[]={11,2,34,67,15};
    int size, pos, element, i;
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the position at which the element is to be inserted: ");
    scanf("%d", &pos);
    size=5;
    size++;
    //shifting elements after pos to the right
    for (i=size; i>pos; i--){
        arr[i-1]=arr[i-2];
    }
    //inserting the input
    arr[pos-1]=element;
    //printing the final array
    for (i=0; i<size; i++){
        printf("\n%d", arr[i]);
    }
    return 0;

}

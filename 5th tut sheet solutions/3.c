#include <stdio.h>
//dont know the other way, abhi exam h baad me dekhte hain, although ye wala sol mere acc sahi nhi h
int main()
{
    int arr[5]={11,2,34,67,15};
    int size=5, element, pos;
    printf("Enter the element to be deleted: ");
    scanf("%d", &element);
    //finding the position o fthe given element
    int i;
    for (i=0;i<size;i++){
        if (arr[i]==element){
            pos=i;
        }
    }
    //deleting the element at pos, by shifting the other elements to the left
    for (i=pos; i<size; i++){
        arr[pos]=arr[pos+1];
    }
    size--;
    //printing the finalarray
    printf("Final array after deleting the element is: ");
    for (i=0; i<size; i++){
        printf("\n%d", arr[i]);
    }
    return 0;

}

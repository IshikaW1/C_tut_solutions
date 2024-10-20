#include <stdio.h>
int main()
{
    int arr[5]={15, 56, 100, 200, 890};
    int size=5, element, l, h, mid, i;
    printf("Enter the element to be found: ");
    scanf("%d", &element);
    l=0, h=size-1;
    while (l<=h){
        mid=(l+h)/2;
        if (element==arr[mid]){
            printf("Element %d found at %d", element, mid);
            return 0;
        }
        else if(element<arr[mid]){
            h=mid-1;
        }
        else l=mid+1;
    }
    printf("Element not found!!");
    return 0;

}

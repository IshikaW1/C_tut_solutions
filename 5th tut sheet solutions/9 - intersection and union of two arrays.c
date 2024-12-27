#include <stdio.h>
int main() {
    int arr1[6]={1,2,3,4,5,9};
    int arr2[7]={5,1,6,7,8,9,10};
    //getting size of each array
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    //creating merged array
    int merged[size1+size2];
    for (int i=0; i<size1; i++){
        merged[i]=arr1[i];
    }
    for (int i=size1; i<size1+size2; i++){
        merged[i]=arr2[i-size1];
    }
    for (int i=0; i<size1+size2; i++){
        printf("\n%d", merged[i]);
    }
    //size of merged array
    int size3=size1+size2;
    
    //DEFINING THE REQUIRED ARRAYS
    int unionarr[size1+size2];//max size for union arr 
    int intersectionarr[size1 < size2 ? size1 : size2];//max size for intersection arr is the smaller one of the two sizes 1 and 2
    int unionsize=0, intersectionsize=0;
    
    //UNION OF THE TWO ARRAYS
    //adding elements from arr1
    for (int i=0; i<size1; i++){
        unionarr[unionsize++]=arr1[i];
    }
    //adding elements from arr2 if they are already not there
    //logic - we will take a particular element of arr2, see if it's already there in arr1, yes -> break, move to nxt element of arr2; no->continue loop; still no->add that element to unionarr
    for (int i = 0; i < size2; i++) {
        int found = 0;
        for (int j = 0; j < unionsize; j++) {
            if (arr2[i] == unionarr[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionarr[unionsize++] = arr2[i];
        }
    }
    //INTERSECTION OF TWO ARRAYS
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if already added to intersectionarr
                int alreadyAdded = 0;
                for (int k = 0; k < intersectionsize; k++) {
                    if (intersectionarr[k] == arr1[i]) {
                        alreadyAdded = 1;
                        break;
                    }
                }
                if (!alreadyAdded) {
                    intersectionarr[intersectionsize++] = arr1[i];
                }
            }
        }
    }
    
    //printing the union and intersection of the two arrays
    printf("\nUnion of two arrays: ");
    for (int i=0; i<unionsize; i++){
        printf("\n%d", unionarr[i]);
    }
    printf("\nIntersection of two arrays: ");
    for (int i=0; i<intersectionsize; i++){
        printf("\n%d", intersectionarr[i]);
    }
    
    return 0;
}


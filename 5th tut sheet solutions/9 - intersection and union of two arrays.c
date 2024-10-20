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
    int intersectionarr[size1];//max size for intersection arr is the smaller one of the two sizes 1 and 2
    int unionsize=0, intersectionsize=0;
    //UNION OF THE TWO ARRAYS
    //adding elements from arr1
    for (int i=0; i<size1; i++){
        unionarr[unionsize++]=arr1[i];
    }
    //adding elements from arr2 if they are already not there
    for (int i=0; i<size2; i++){
        if (unionarr[i] == arr2[i]){
            unionarr[unionsize++]=arr2[i];
        }
    }
    //INTERSECTION OF TWO ARRAYS
    
    //printing the union and intersection of the two arrays
    printf("\nUnion of two arrays: ");
    for (int i=0; i<unionsize; i++){
        printf("\n%d", unionarr[i]);
    }
    printf("\nIntersection of two arrays: ");
    for (int i=0; i<intersecionsize; i++){
        printf("\n%d", intersectionarr[i]);
    }
    
    return 0;
}

#include <stdio.h>
int main() {
    int arr[] = {1, 67, 89, 3, 3, 8, 90, 33, 11, 6, 7, 8, 67, 9, 55, 89, 21, 3};
    int length = sizeof(arr) / sizeof(arr[0]);

    //calculating mean
    int sum=0;
    float mean;
    for(int i=0; i<length; i++){
        sum+=arr[i];
    }
    mean=(float)sum/length;

    //sorting the array using bubble sort, for median and mode calculation
    for(int i=0; i<length-1; i++){
        for(int j=0; j<length-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //calculating median
    float median;
    if(length%2==0){
        median=(arr[length/2-1]+arr[length/2])/2.0;
    }
    else{
        median=arr[length/2];
    }

    //calculating mode
    int maxCount=0, mode=arr[0], count=1;
    for(int i=1; i<length; i++){
        if(arr[i]==arr[i-1]){
            count++;
        }else{
            count=1;
        }
        if(count>maxCount){
            maxCount=count;
            mode=arr[i];
        }

    }

    //printing the values
    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);
    printf("Mode: %d\n", mode);

    return 0;
}

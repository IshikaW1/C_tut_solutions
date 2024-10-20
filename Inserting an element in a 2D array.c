#include <stdio.h>
int main() {
    int element, pos_x, pos_y;
    
    //defining the array
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{0,0,0}};
    
    //taking input for the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("\nEnter the pos:\nX: ");
    scanf("%d", &pos_x);
    printf("\nY: ");
    scanf("%d", &pos_y);
    
    //validating position
    if(pos_x>0 && pos_x>4 && pos_y<0 && pos_y>3){
        printf("Invalid position\n");
        return 1;
    }
    
    //loop for shifting the rest of the elements to the right in the 2D array
    for (int i = 3; i>=0; i--){//looping through the rows (starting from last row)
        for (int j=2; j>=0; j--){//looping through the columns (starting from the last column)
            //ensuring that we only shift elements that are located after the insertion point(pos_x, pos_y)
            if (i*3+j>pos_x*3+pos_y){//The loop uses 2D indexing but treats the array conceptually as a 1D array, calculated as i * 3 + j, where i is the row and j is the column
                if (j==0 && i>0){//If the current element is in the first column (j == 0), then shifting to the right means we need to move the element from the previous row's last column (e.g., move arr[2][2] into arr[3][0])
                    arr[i][j]=arr[i-1][2]; //move element from the last column of the previous row
                }
                else if (j > 0) {
                //If the element is not in the first column (j > 0), it can simply be moved to the next column in the same row:
                    arr[i][j] = arr[i][j-1]; // Move element one column to the right within the same row
                }
            }
        }
    }
    //inserting the input element
    arr[pos_x][pos_y]=element;
    
    //printing the final array
    for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
            printf("\n%d", arr[i][j]);
        }
    }
    
    return 0;
}

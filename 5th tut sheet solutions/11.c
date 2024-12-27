#include <stdio.h>
void main(){
    int matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3]={{10,11,12},{13,14,15},{16,17,18}};
    int add[3][3], mult[3][3]={0}, transpose1[3][3], transpose2[3][3];
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            add[i][j]=matrix1[i][j]+matrix2[i][j];
            //Using a nested loop with an additional index k to calculate the dot product of the i-th row of matrix1 with the j-th column of matrix2
            for (int k = 0; k < 3; k++) {
                mult[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            transpose1[i][j]=matrix1[j][i];
            transpose2[i][j]=matrix2[j][i];
        }
    }
    printf("Matrix 1:\n");
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    printf("Added:\n");
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
    printf("Multiplied:\n");
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",mult[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix 1:\n");
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",transpose1[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix 2:\n");
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",transpose2[i][j]);
        }
        printf("\n");
    }    
}

#include <stdio.h>
int main() {
    int num;
    printf("Enter the number whose table you want to be displayed: ");
    scanf("%d", &num);
    for (int i=1; i<=10; i++){
        printf("\n%d X %d = %d", num, i, num*i);
    }
    return 0;
}

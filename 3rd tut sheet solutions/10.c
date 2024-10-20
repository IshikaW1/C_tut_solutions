include <stdio.h>
int main() {
    int num, sum=0;
    printf("Enter numbers(enter -999 to quit):\n");
    while (1){
        scanf("%d", &num);
        if (num==-999){
            break;
        }
        sum+=num;
    }   
    printf("Sum of all the numbers entered= %d", sum);
    return 0;
}

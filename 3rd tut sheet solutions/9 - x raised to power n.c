#include <stdio.h>9
#include <math.h>
int main() {
    int x, n;
    printf("Enter Base(x):");
    scanf("%d", &x);
    printf("\nEnter Power(n): ");
    scanf("%d", &n);
    printf("\nx^n= %.0lf\n", pow(x, n));
    return 0;
}

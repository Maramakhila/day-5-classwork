#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("1/%d + ", i);
        sum += 1.0/i;
    }

    printf("\nSum of the series up to %d terms: %f\n", n, sum);

    return 0;
}

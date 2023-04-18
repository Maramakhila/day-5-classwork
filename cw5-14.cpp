#include <stdio.h>

int gcd(int a, int b);

int main() {
    int a, b;

    printf("Input 1st number: ");
    scanf("%d", &a);

    printf("Input 2nd number: ");
    scanf("%d", &b);

    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));

    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}


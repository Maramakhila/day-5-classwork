#include <stdio.h>

int fib(int n);

int main() {
    int n, i;

    printf("Input number of terms for the series (< 20): ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}


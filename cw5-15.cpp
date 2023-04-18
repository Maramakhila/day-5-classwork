#include <stdio.h>

int Max(int arr[], int n);

int main() {
    int n, i, arr[100];

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The largest element in the array is %d\n", Max(arr, n));

    return 0;
}


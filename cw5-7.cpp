#include <stdio.h>

int main() {
    int arr1[100], arr2[100], concat[200];
    int n1, n2, i, j;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of the first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of the second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // concatenate the two arrays
    for (i = 0; i < n1; i++) {
        concat[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        concat[i] = arr2[j];
        i++;
    }

    // print the concatenated array
    printf("The concatenated array is: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", concat[i]);
    }
    printf("\n");

    return 0;
}


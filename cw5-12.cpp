#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, freq[256] = {0};

    printf("Input a string: ");
    fgets(str, 1000, stdin);

    for (i = 0; i < strlen(str); i++) {
        freq[(int) str[i]]++;
    }

    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0 && str[i]) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}

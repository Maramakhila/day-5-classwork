#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000], new_str[1000];
    int i, j = 0;

    printf("Input the string: ");
    fgets(str, 1000, stdin);

    for (i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            new_str[j] = str[i];
            j++;
        }
    }
    new_str[j] = '\0';

    printf("The modified string is: %s", new_str);

    return 0;
}

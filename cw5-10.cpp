#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000], ch;
    int i;

    printf("Input the string: ");
    fgets(sentence, 1000, stdin);

    i = 0;
    while (sentence[i]) {
        ch = sentence[i];
        if (islower(ch))
            sentence[i] = toupper(ch);
        else if (isupper(ch))
            sentence[i] = tolower(ch);
        i++;
    }

    printf("The modified string is: %s", sentence);

    return 0;
}

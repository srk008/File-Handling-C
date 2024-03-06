#include <stdio.h>

int main() {
    char str[100];
    int i, j, start, end;

    // Input
    printf("Enter a string: ");
    gets(str);

    // Reverse Words
    for (i = 0; str[i] != '\0'; i++) {
        // Find the start of a word
        while (str[i] == ' ' && str[i] != '\0') {
            i++;
        }

        // Find the end of the word
        start = i;
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }
        end = i - 1;

        // Reverse the word
        for (j = end; j >= start; j--) {
            printf("%c", str[j]);
        }

        // Print space between words
        if (str[i] != '\0') {
            printf(" ");
        }
    }

    return 0;
}


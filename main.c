#include <stdio.h>

int countChar(char *str, char c);

int main() {
    char str[100];
    char c;

    printf("Zadejte retezec:\n");
    fgets(str, sizeof(str), stdin);

    printf("Zadejte hledany znak: ");
    scanf("%c", &c);

    int count = countChar(str, c);

    printf("Znak '%c' se v zadanem retezci vyskytuje %d krat.\n", c, count);
    return 0;
}

int countChar(char *str, char c) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == c) {
            count++;
        }
        i++;
    }

    return count;
}


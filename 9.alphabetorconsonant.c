#include <stdio.h>

int isLowercaseVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int isUppercaseVowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void checkVowelOrConsonant(char c) {
    if (isLowercaseVowel(c) || isUppercaseVowel(c))
        printf("%c is a vowel.\n", c);
    else
        printf("%c is a consonant.\n", c);
}

int main() {
    char c;
    printf("Enter an alphabet: ");
    scanf(" %c", &c); // Added space before %c to consume any leading whitespace

    checkVowelOrConsonant(c);

    return 0;
}

/*
 * palindrome.c
 * Cek palindrom (abaikan huruf besar/kecil & non-huruf).
 */

#include <ctype.h>
#include <stdio.h>

int is_palindrome(const char *text) {
    char cleaned[256];
    size_t len = 0;
    for (size_t i = 0; text[i] != '\0'; i++) {
        if (isalpha((unsigned char)text[i])) {
            cleaned[len++] = (char)tolower((unsigned char)text[i]);
        }
    }
    for (size_t i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - 1 - i]) return 0;
    }
    return 1;
}

int main(void) {
    const char *samples[] = {"Racecar", "Hello", "Kasur ini rusak"};
    for (int i = 0; i < 3; i++) {
        printf("\"%s\" -> %s\n", samples[i],
               is_palindrome(samples[i]) ? "palindrom" : "bukan");
    }
    return 0;
}

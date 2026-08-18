/* multiplication_table_of_83.c
 * Tabel perkalian 83. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("83 x %d = %d\n", i, 83 * i);
    }
    return 0;
}

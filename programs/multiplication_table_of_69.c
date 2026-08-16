/* multiplication_table_of_69.c
 * Tabel perkalian 69. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("69 x %d = %d\n", i, 69 * i);
    }
    return 0;
}

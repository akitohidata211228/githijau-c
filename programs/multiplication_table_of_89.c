/* multiplication_table_of_89.c
 * Tabel perkalian 89. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("89 x %d = %d\n", i, 89 * i);
    }
    return 0;
}

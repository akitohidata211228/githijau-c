/* multiplication_table_of_8.c
 * Tabel perkalian 8. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("8 x %d = %d\n", i, 8 * i);
    }
    return 0;
}

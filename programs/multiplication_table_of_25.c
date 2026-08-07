/* multiplication_table_of_25.c
 * Tabel perkalian 25. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("25 x %d = %d\n", i, 25 * i);
    }
    return 0;
}

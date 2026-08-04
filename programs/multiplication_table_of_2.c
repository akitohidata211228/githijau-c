/* multiplication_table_of_2.c
 * Tabel perkalian 2. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("2 x %d = %d\n", i, 2 * i);
    }
    return 0;
}

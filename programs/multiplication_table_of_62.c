/* multiplication_table_of_62.c
 * Tabel perkalian 62. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("62 x %d = %d\n", i, 62 * i);
    }
    return 0;
}

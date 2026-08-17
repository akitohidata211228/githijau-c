/* multiplication_table_of_75.c
 * Tabel perkalian 75. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("75 x %d = %d\n", i, 75 * i);
    }
    return 0;
}

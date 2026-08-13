/* multiplication_table_of_50.c
 * Tabel perkalian 50. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("50 x %d = %d\n", i, 50 * i);
    }
    return 0;
}

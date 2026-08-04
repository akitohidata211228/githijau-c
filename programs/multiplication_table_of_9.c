/* multiplication_table_of_9.c
 * Tabel perkalian 9. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("9 x %d = %d\n", i, 9 * i);
    }
    return 0;
}

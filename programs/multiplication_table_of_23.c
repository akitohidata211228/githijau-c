/* multiplication_table_of_23.c
 * Tabel perkalian 23. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("23 x %d = %d\n", i, 23 * i);
    }
    return 0;
}

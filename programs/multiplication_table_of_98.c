/* multiplication_table_of_98.c
 * Tabel perkalian 98. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("98 x %d = %d\n", i, 98 * i);
    }
    return 0;
}

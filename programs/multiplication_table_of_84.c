/* multiplication_table_of_84.c
 * Tabel perkalian 84. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("84 x %d = %d\n", i, 84 * i);
    }
    return 0;
}

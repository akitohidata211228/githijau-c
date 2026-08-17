/* multiplication_table_of_77.c
 * Tabel perkalian 77. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("77 x %d = %d\n", i, 77 * i);
    }
    return 0;
}

/* multiplication_table_of_21.c
 * Tabel perkalian 21. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("21 x %d = %d\n", i, 21 * i);
    }
    return 0;
}

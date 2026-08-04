/* multiplication_table_of_4.c
 * Tabel perkalian 4. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("4 x %d = %d\n", i, 4 * i);
    }
    return 0;
}

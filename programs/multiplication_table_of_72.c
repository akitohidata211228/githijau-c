/* multiplication_table_of_72.c
 * Tabel perkalian 72. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("72 x %d = %d\n", i, 72 * i);
    }
    return 0;
}

/* multiplication_table_of_37.c
 * Tabel perkalian 37. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("37 x %d = %d\n", i, 37 * i);
    }
    return 0;
}

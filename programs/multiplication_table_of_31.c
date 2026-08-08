/* multiplication_table_of_31.c
 * Tabel perkalian 31. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("31 x %d = %d\n", i, 31 * i);
    }
    return 0;
}

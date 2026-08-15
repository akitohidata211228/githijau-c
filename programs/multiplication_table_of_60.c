/* multiplication_table_of_60.c
 * Tabel perkalian 60. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("60 x %d = %d\n", i, 60 * i);
    }
    return 0;
}

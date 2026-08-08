/* multiplication_table_of_30.c
 * Tabel perkalian 30. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("30 x %d = %d\n", i, 30 * i);
    }
    return 0;
}

/* multiplication_table_of_85.c
 * Tabel perkalian 85. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("85 x %d = %d\n", i, 85 * i);
    }
    return 0;
}

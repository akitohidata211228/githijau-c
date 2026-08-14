/* multiplication_table_of_53.c
 * Tabel perkalian 53. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("53 x %d = %d\n", i, 53 * i);
    }
    return 0;
}

/* multiplication_table_of_43.c
 * Tabel perkalian 43. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("43 x %d = %d\n", i, 43 * i);
    }
    return 0;
}

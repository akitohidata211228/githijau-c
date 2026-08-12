/* multiplication_table_of_42.c
 * Tabel perkalian 42. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("42 x %d = %d\n", i, 42 * i);
    }
    return 0;
}

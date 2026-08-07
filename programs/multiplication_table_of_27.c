/* multiplication_table_of_27.c
 * Tabel perkalian 27. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("27 x %d = %d\n", i, 27 * i);
    }
    return 0;
}

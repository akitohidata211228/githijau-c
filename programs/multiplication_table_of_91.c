/* multiplication_table_of_91.c
 * Tabel perkalian 91. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("91 x %d = %d\n", i, 91 * i);
    }
    return 0;
}

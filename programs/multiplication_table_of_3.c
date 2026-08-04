/* multiplication_table_of_3.c
 * Tabel perkalian 3. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("3 x %d = %d\n", i, 3 * i);
    }
    return 0;
}

/* multiplication_table_of_81.c
 * Tabel perkalian 81. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("81 x %d = %d\n", i, 81 * i);
    }
    return 0;
}

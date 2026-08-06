/* multiplication_table_of_19.c
 * Tabel perkalian 19. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("19 x %d = %d\n", i, 19 * i);
    }
    return 0;
}

#include <stdio.h>
//Grid of Bricks
int main(void) {
    const int n = 3;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("#");
        }
        printf("\n");
    }
}

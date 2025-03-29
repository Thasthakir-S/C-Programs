#include <stdio.h>
//Using Long for long Numbers
int main(void) {
    long dollars = 1;
    while (1) {
        char c;
        printf("Here's $%ld. Double it and give it to the next person? (y/n): ", dollars);
        scanf(" %c", &c);
        if (c == 'y') {
            dollars *= 2;
        } else {
            break;
        }
    }
    printf("Here's $%ld.\n", dollars);
}

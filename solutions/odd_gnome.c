#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, g, x, y, i;

    scanf("%d", &n);
    while (n--) {
        int jaPrintou = 0;

        scanf("%d", &g);
        scanf("%d", &x);
        for (i = 2; i <= g; i ++) {
            scanf("%d", &y);
            if ((x != (y-1)) && (i != g) && !jaPrintou) {
                printf("%d\n", i);
                jaPrintou = 1;
            }

            x = y;
        }
    }

    return 0;
}
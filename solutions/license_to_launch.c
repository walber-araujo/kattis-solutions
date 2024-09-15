#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i, i_day, qt_junk, qt_min = 1000000000;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &qt_junk);
            if (qt_junk < qt_min) {
                qt_min = qt_junk;
                i_day = i;
            }
    }

    printf("%d\n", i_day);

    return 0;
}
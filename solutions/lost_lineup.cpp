#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, i, value;
    scanf("%d", &n);
    int lineUp[n];
    lineUp[0] = 1;

    for (i = 2; i <= n; i++) {
        scanf("%d", &value);
        lineUp[value+1] = i;
    }

    printf("%d", 1);
    for (i = 1; i < n; i++) {
        printf(" %d", lineUp[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <cmath>

double calculatePrice(int p, int a, int b, int c, int d, int k) {
    return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

int main() {
    int a, b, c, d, p, n, i;
    double price, decline = 0.0;
    double max = -1.0, min = 4001.0; 
    scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n);

    for (i = 1; i <= n; i++) {
        price = calculatePrice(p, a, b, c, d, i);
        if ((max - price) > decline) {
            decline = max - price;
        }
        if (price > max) {
            max = price;
        }
    }

    printf("%f\n", decline);
    return 0;
}
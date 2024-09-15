#include <stdio.h>
#include <stdlib.h>

void main() {

    int n, valor;
    int caso = 1;
    
    while(scanf("%d", &n) != EOF) {
        int menor = 1000000;
        int maior = -1000000;
        for (int i = 0; i < n; i++) {
            scanf("%d", &valor);
            if (valor < menor) {
                menor = valor;
            }
            if (valor > maior) {
                maior = valor;
            }

        }
        printf("Case %d: %d %d %d\n", caso, menor, maior, (maior - menor));
        caso++;
    } 
}
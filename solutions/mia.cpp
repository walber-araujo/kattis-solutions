#include <stdio.h>
#include <iostream>

using namespace std;

int pontuacao(int maior, int menor) {
    if (menor > maior) {
        swap(maior, menor);
    }
    if (maior == 2 && menor == 1) {
        return 100000;
    }
    if (maior == menor) {
        return (maior + menor) * 100;
    }
    return (maior * 10) + menor;
}

int main() {
    int s0, s1, r0, r1;
    while(1) {
        scanf("%d %d %d %d", &s0, &s1, &r0, &r1);
        if (s0 == 0 && s1 == 0 && r0 == 0 && r1 == 0) break;
        int j1 = pontuacao(s0, s1);
        int j2 = pontuacao(r0, r1);

        if (j1 > j2) {
            printf("Player 1 wins.\n");
        } else if (j2 > j1) {
             printf("Player 2 wins.\n");
        }
        else {
            printf("Tie.\n");
        }
    
    }
    return 0;
}
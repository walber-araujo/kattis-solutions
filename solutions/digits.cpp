#include <stdio.h>
#include <cmath>
#include <string>
#include <iostream>

using namespace std;

int calculateI(string n) {
    int prev = n.length();
    int cur = log10(prev) + 1;
    int i = 2;
    while (cur != prev) {
        prev = cur;
        cur = log10(cur) + 1;
        i++;
    }
    return i;
}

int main() {
    string entry;
    while(true) {
        cin >> entry;
        if (entry == "END") break;
        if (entry == "1") {
            printf("%d\n", 1);
            continue;
        }
        printf("%d\n", calculateI(entry));
    }

    return 0;
}
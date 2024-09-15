#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back

int pieces[5];

void printArray() {
    cout << pieces[0];
    for (int i = 1; i < 5; i++) {
       cout << " " << pieces[i];
    }
    cout << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    for (int i = 0; i < 5; i++) cin >> pieces[i];
    int trocou = 1;
    while(trocou) {
        trocou = 0;
        for (int i = 0; i < 4; i++) {
            if (pieces[i] > pieces[i+1]) {
                swap(pieces[i], pieces[i+1]);
                printArray();
                trocou = 1;
            }
        }
    }
    return 0;
}

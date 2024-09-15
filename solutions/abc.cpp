#include "bits/stdc++.h"
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;
    cin.ignore();
    string ord; cin >> ord;
    if (b < a) swap(a, b);
    if (c < a) swap(a, c);
    if (b > c) swap(b, c);
    
    int firstPrint = 1;
    for (int i = 0; i < 3; i++) {
        if (ord[i] == 'A') {
            if (firstPrint) {
                cout << a;
                firstPrint = 0;
            }
            else cout << " " << a;
        }
        else if (ord[i] == 'B') {
            if (firstPrint) {
                cout << b;
                firstPrint = 0;
            }
            else cout << " " << b;
        }
        else {
            if (firstPrint) {
                cout << c;
                firstPrint = 0;
            }
            else cout << " " << c;
        }
    }
    cout << endl;

}
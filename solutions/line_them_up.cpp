#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, i = 0; cin >> n;
    int decreasing = 1, increasing = 1;
    string prevName, curName;
    cin >> prevName;
    for(; i < n-1; i++) {
        cin >> curName;
        if (prevName > curName) {
            increasing = 0;
        }
        if (curName > prevName) {
            decreasing = 0;
        }
        prevName = curName;
    }

    if (increasing) cout << "INCREASING" << endl;
    else if (decreasing) cout << "DECREASING" << endl;
    else cout << "NEITHER" << endl;

    return 0;
}
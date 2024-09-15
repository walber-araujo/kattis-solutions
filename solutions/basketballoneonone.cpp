#include "bits/stdc++.h"
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);

    string entry; cin >> entry;
    int a = 0, b = 0;
    for (int i = 0; i < entry.length(); i += 2) {
        char pont = entry[i+1];
        if (entry[i] == 'A') a += pont - '0';
        if (entry[i] == 'B') b += pont - '0';
    }

    if (a > b) cout << "A" << endl;
    else cout << "B" << endl;
    return 0;
}
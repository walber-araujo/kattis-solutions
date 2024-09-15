#include "bits/stdc++.h"
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    if (n <= 3) cout << 1 << endl;
    else cout << n-2 << endl;

    return 0;
}
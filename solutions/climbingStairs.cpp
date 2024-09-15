#include "bits/stdc++.h"
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, r, k, steps; cin >> n >> r >> k;

    if (r >= n) steps = r; 
    else steps = r + (n - r + 1) / 2;
    steps = max(k, steps);

    cout << steps * 2 << endl;

    return 0;
}

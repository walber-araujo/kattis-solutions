#include "bits/stdc++.h"
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, value, sum = 0; cin >> n;
    while (n--) {
        cin >> value;
        if (value < 0) {
            sum -= value;
        }
    }
    cout << sum << endl;
}
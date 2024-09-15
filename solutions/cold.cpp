#include "bits/stdc++.h"
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, temp, c = 0; cin >> n;
    while(n--) {
        cin >> temp;
        if (temp < 0) c++;
    }
    cout << c << endl;

    return 0;
}
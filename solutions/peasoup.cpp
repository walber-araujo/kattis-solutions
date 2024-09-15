#include "bits/stdc++.h"

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    string restaurant, item;
    int ps, pk;
    while(n--) {
        ps = 0, pk = 0;
        int k; cin >> k;
        cin.ignore();
        getline(cin, restaurant);
        for (int i = 0; i < k; i++) {
            getline(cin, item);
            if (item == "pea soup") ps = 1;
            else if (item == "pancakes") pk = 1;
        }

        if (ps && pk) {
            cout << restaurant << endl;
            break;
        }
    }
    if (!ps || !pk) cout << "Anywhere is fine I guess" << endl;
    return 0;
}
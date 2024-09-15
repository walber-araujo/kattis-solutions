#include "bits/stdc++.h"
typedef long long ll;
using namespace std;


int main() {
    cin.tie(0)->sync_with_stdio(0);
    unsigned int n, t, x; cin >> n >> t;
    unsigned int a[n];
    ll sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        a[i] = x;
    }

    if (t == 1) cout << 7 << endl;
    else if (t == 2) {
        if (a[0] > a[1]) cout << "Bigger" << endl;
        else if (a[0] == a[1]) cout << "Equal" << endl;
        else cout << "Smaller" << endl;
    }
    else if (t == 3){
        vector<unsigned int> numbs = {a[0], a[1], a[2]};
        sort(numbs.begin(), numbs.end());
        cout << numbs[1];
    }
    else if (t == 4) cout << sum;
    else if (t == 5) {
        sum = 0;
        for (int i = 0; i < n; i++) {
            if ((a[i] % 2) == 0) sum += a[i];
        }
        cout << sum << endl;
    }
    else if (t == 6) {
        unsigned int value;
        string str;
        for (int i = 0; i < n; i++) {
            value = a[i] % 26;
            str += static_cast<char>(value + 97);
        }
        cout << str << endl;
    }
    else if (t == 7) {
        int c = 0;
        int i = 0;
        while(1) {
            i = a[i];
            if (i >= n) {
                cout << "Out" << endl;
                break;
            }
            else if (i == (n-1)) {
                cout << "Done" << endl;
                break;
            }
            c++;
            if (c == n) {
                cout << "Cyclic" << endl;
                break;
            }
        }
    }
    
    return 0;
}
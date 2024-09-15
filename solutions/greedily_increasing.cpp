#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    int prev; cin >> prev;
    n--;
    int qt = 1;
    string ans = to_string(prev);
    while(n--) {
        int g; cin >> g;
        if (g > prev) {
            prev = g;
            ans += " " + to_string(prev);
            qt++;
        }
    }
    cout << qt << endl << ans << endl;
    return 0;
}

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    int a[n+1] = {0};
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int h; cin >> h;
        if (a[h] == 0) a[h-1]++;
        else {
            a[h]--;
            a[h-1]++;
        }
    }
    for (int i = 0; i < n+1; i++) {
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}
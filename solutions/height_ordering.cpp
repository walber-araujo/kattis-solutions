#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int p; cin >> p;
    vector<int> heigths(20);
    while(p--) {
        int k; cin >> k;
        int steps = 0;
        for (int i = 0; i < 20; i++) cin >> heigths[i];

        for (int i = 1; i < 20; i++) {
            int cur = heigths[i];
            int j = i-1;
            while(j >= 0 && cur < heigths[j]) {
                heigths[j+1] = heigths[j]; 
                j--;
                steps++;
            }
            heigths[j+1] = cur;
        }
        cout << k << " " << steps << endl;
    }
    return 0;
}

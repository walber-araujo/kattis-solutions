#include "bits/stdc++.h"

using namespace std;
int inf = 10e9+7; 

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int min = inf;
    int n, m, x, i, value; cin >> n;
    int teaPrice[n];
    for (i = 0; i < n; i++) cin >> teaPrice[i];

    cin >> m;
    int toppingPrice[m];
    for (i = 0; i < m; i++) cin >> toppingPrice[i];

    for (i = 0; i < n; i++) {
        int k; cin >> k;
        
        while(k--) {
            cin >> value;
            if((toppingPrice[value-1] + teaPrice[i]) < min) {
                min = toppingPrice[value-1] + teaPrice[i];
            }
        }
    }
   
    cin >> x;
    int students = (x / min) - 1;
    if (students < 0) students = 0;

    cout << students  << endl;

    return 0;
}
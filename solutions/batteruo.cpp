#include "bits/stdc++.h"

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;  cin >> n;
    float sum = 0.0, value, atBat = 0.0;
    while(n--) {
        cin >> value;
        if (value != -1) {
            atBat++;
            sum += value;
        }
    }
    cout << sum / atBat << endl;
    return 0;
}
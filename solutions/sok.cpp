#include "bits/stdc++.h"
typedef long long ll;
using namespace std;


int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, i, j, k;
    cin >> a >> b >> c >> i >> j >> k;
    double c1 = 1.0 * a / i;
    double c2 = 1.0 * b / j;
    double c3 = 1.0 * c / k;
    double q = min({c1, c2, c3});

    cout << fixed << setprecision(6);
    cout << a - q * i << " ";
    cout << b - q * j << " ";
    cout << c - q * k << endl;

    return 0;
}
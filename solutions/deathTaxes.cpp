#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll x, y, qtShare = 0;
    string event;
    double totalValue = 0;
    double averageCost = 0;

    while (1) {
        cin >> event;
        if (event == "die") {
            cin >> y;
            break;
        } else if (event == "buy") {
            cin >> x >> y;
            totalValue += x * y;
            qtShare += x;
            averageCost = totalValue / qtShare;
        } else if (event == "sell") {
            cin >> x >> y;
            totalValue -= x * averageCost;
            qtShare -= x;
        } else if (event == "split") {
            cin >> x;
            qtShare *= x;
            averageCost /= x;
        } else if (event == "merge") {
            cin >> x;
            ll remainder = qtShare % x;
            totalValue -= remainder * averageCost;
            qtShare = (qtShare - remainder) / x;
            averageCost *= x;
        }
    }

    double saleValue = qtShare * y;
    double profit = saleValue - totalValue;
    double tax = (profit > 0) ? profit * 0.3 : 0;
    double finalAmount = saleValue - tax;

    cout << fixed << setprecision(6) << finalAmount << endl;

    return 0;
}

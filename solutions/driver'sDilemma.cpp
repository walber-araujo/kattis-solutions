#include "bits/stdc++.h"
typedef long long ll;
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    float capacity, rate, distance, efficiency, hours, capacity2;
    int speed;
    cin >> capacity >> rate >> distance;
    vector<pair<int, float>> table;
    for (int i = 0; i < 6; i++) {
        cin >> speed >> efficiency;
        table.push_back(make_pair(speed, efficiency));
    }

    capacity /= 2.0;
    for (int i = 5; i > -1; i--) {
        capacity2 = capacity;
        speed = table[i].first;
        efficiency = table[i].second;
        hours = distance / speed;
        capacity2 -= hours*rate;
        if ((efficiency*capacity2) >= distance) {
            cout << "YES " << speed << endl;
            return 0;
        }

    }

    cout << "NO" << endl;


    return 0;
}

#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
const int inf = 1e9+7;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int participants, budget, hotels, weeks, beds;
    int price, min, curPrice;
    cin >> participants >> budget >> hotels >> weeks;
        min = inf;
        for (int i = 0; i < hotels; i++) {
            cin >> price;
            for (int j = 0; j < weeks; j++) {
                cin >> beds;
                if (beds >= participants) {
                    curPrice = participants*price;
                    if (curPrice < min) min = curPrice;
                }
            }
        }
    

    if (min <= budget) cout << min << endl;
    else cout << "stay home" << endl;

    return 0;
}
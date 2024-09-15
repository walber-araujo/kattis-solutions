#include "bits/stdc++.h"
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    int total, votes, winner, max, i;
    while (t--) {
        int n; cin >> n;
        total = 0;
        max = -1;
        for (i = 1; i <= n; i++) {
            cin >> votes;
            if (votes > max) {
                max = votes;
                winner = i;
            }
            else if (votes == max) winner = -1;
            total += votes;
        }
        if (winner == -1) cout << "no winner" << endl;
        else if (max > (total/2)) cout << "majority winner " << winner << endl;
        else cout << "minority winner " << winner << endl;

    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int processAttack(string &ans, const string &attack, int i) {
    if (i + 2 < attack.size()) {
        string sub = attack.substr(i, 3);
        sort(sub.begin(), sub.end());
        if (sub == "BLR") {
            ans += "C";
            return i + 3;
        }
    }
    if (attack[i] == 'R') ans += "S";
    else if (attack[i] == 'B') ans += "K";
    else if (attack[i] == 'L') ans += "H";
    return i + 1;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string attack;
    cin >> attack;
    string ans = "";
    int i = 0;
    while (i < attack.size()) {
        i = processAttack(ans, attack, i);
    }
    cout << ans << endl;
    return 0;
}

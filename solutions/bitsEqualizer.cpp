#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
string t;

tuple<int, int, int> count(string& s) {
    int qtInt = 0, qt0 = 0, qt1 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '?') qtInt++;
        if (s[i] == '0') qt0++;
        if (s[i] == '1') qt1++;
    }
    tuple<int, int, int> ret = {qtInt, qt0, qt1};
    return ret;
}

int countSteps() {
    int qtInts, qt0s, qt1s;
    int qtIntt, qt0t, qt1t;
    tie(qtInts, qt0s, qt1s) = count(s);
    tie(qtIntt, qt0t, qt1t) = count(t);
    int dif0 = abs(qt0s - qt0t);
    int dif1 = abs(qt1s - qt1t);
    if (qtInts < (dif0 + dif1)) return -1;
    
    int steps = qtInts;

    
    return steps;
}

int main() {
    //cin.tie(0)->sync_with_stdio(0);
    int c; cin >> c;
    for (int i = 1; i <= c; i++) {
        cin >> s >> t;
        int ans = countSteps();
        cout << "Case " << i << ": " << ans << endl;
    }
}
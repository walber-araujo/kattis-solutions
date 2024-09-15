#include "bits/stdc++.h"

using namespace std;

vector<string> split(string str, char delimiter) {
    string token;
    vector<string> tokens;
    istringstream strStream(str);
    while (getline(strStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int l, x; cin >> l >> x;
    cin.ignore();
    int sum = 0, value, groups = 0;
    string line, word;
    while(x--) {
        getline(cin, line);
        word = split(line, ' ')[0];
        value = stoi(split(line, ' ')[1]);
        if ((word == "enter") && (sum + value <= l)){
            sum += value;
        }
        else if ((word == "leave")) sum-= value;
        else groups++;
    }
    cout << groups << endl;
    return 0;
}
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back

char toLowerChar(char c) {
    return tolower(static_cast<unsigned char>(c));
}

string toLower(const string& s) {
    string lower_s = s;
    transform(lower_s.begin(), lower_s.end(), lower_s.begin(), toLowerChar);
    return lower_s;
}

bool compareStrings(const string& a, const string& b) {
    return toLower(a) < toLower(b);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int r, c;
    bool first_case = true;

    while (cin >> r >> c && (r != 0 || c != 0)) {
        if (!first_case) {
            cout << "\n"; 
        }
        first_case = false;

        vector<string> columns(c, string(r, ' '));
        for (int i = 0; i < r; ++i) {
            string line;
            cin >> line;
            for (int j = 0; j < c; ++j) {
                columns[j][i] = line[j];
            }
        }

        sort(columns.begin(), columns.end(), compareStrings);
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                cout << columns[j][i];
            }
            cout << "\n";
        }
    }
    return 0;
}
#include "bits/stdc++.h"

using namespace std;

vector<string> split(string str, char delimiter) {
    string token;
    vector<string> tokens;
    istringstream strStream(str);
    while(getline(strStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int i = 0, score = 0, ac = 0;
    int problems[26] = {0};
    int errs[26] = {0};
    string entry;
    while(1) {
        getline(cin, entry);
        if (entry == "-1") break;
        vector<string> parts = split(entry, ' ');
        char problem = parts[1][0];
        if (parts[2] == "right") {
            problems[problem-65] = stoi(parts[0]);
            ac++;
        }
        else {
            errs[problem-65]++;
        }
    }
    
    for(;i < 26; i++) {
        if (problems[i] > 0) {
            score += problems[i] + (errs[i]*20);
        }
    } 
    cout << ac << " " << score << "\n";
    return 0;
}
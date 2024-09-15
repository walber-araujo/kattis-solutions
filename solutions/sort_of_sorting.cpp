#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back
#define MAXN 50050

void mySort(vector<string> &names, int n) {
    for (int i = 1; i < n; i++) {
        int j = i-1;
        string cur = names[i];
        string fix = names[i].substr(0, 2);
        string var = names[j].substr(0, 2);
        while(j >= 0 && fix < var) {
            names[j+1] = names[j];
            j--;
            if (j >= 0) var = names[j].substr(0, 2);
        }
        names[j+1] = cur;
    }
}

void printVector(vector<string> & names) {
    for (int i = 0; i < names.size(); i++) cout << names[i] << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    vector<string> names;
    while(1) {
        cin >> n;
        if (n == 0) break;
        names.resize(n);
        for (int i = 0; i < n; i++) cin >> names[i];
        mySort(names, n);
        printVector(names);
        cout << endl;
    }
    return 0;
}
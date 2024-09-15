#include "bits/stdc++.h"

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string name; cin >> name;
    int i = 0;
    for (; i < name.length()-1; i++){
        if ((name[i] == 's') && (name[i+1] == 's')) {
            cout << "hiss" << endl;
            return 0;
        }
    }
    cout << "no hiss" << endl;
    return 0;
}
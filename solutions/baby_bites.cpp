#include "bits/stdc++.h"
using namespace std;

int main() {
    int n, x = 1; cin >> n;
    cin.ignore();
    string value;
    while(n--) {
        cin >> value;
        if (value == "mumble") {
            x++;
        }
        else if (stoi(value) == x) {
            x++;
        }
        else {
            cout << "something is fishy" << endl;
            return 0;
        }
    }
    cout << "makes sense" << endl;
    return 0;
}
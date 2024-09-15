#include "bits/stdc++.h"
typedef long long ll;
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int beginX, beginY, endX, endY, charge;
    cin >> beginX >> beginY >> endX >> endY >> charge;

    int distance = abs(beginX - endX) + abs(beginY - endY);
    charge -= distance; 
    if (charge < 0) cout << "N" << endl;
    else if ((charge % 2) == 0) cout << "Y" << endl;
    else cout << "N" << endl;

    return 0;
}
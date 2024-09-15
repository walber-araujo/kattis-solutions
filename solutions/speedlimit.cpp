#include "bits/stdc++.h"
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    while(1) {
        int n; cin >> n;
        int s, prevTime = 0, currTime, dist = 0; 
        if (n == -1) break;
        while(n--) {
            cin >> s >> currTime;
            dist += s * (currTime - prevTime);
            prevTime = currTime;
        }

        cout << dist << " miles" << endl;
    }    
    
    return 0;
}
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back;

int main() {
    int n; 
    scanf("%d", &n);
    float k;
    scanf("%f", &k);
    int requests[n];
    for (int i = 0; i < n; i++) cin >> requests[i];
    int max = 1, simult = 1;
    int iAtu = 0;
    int i = 1;
    while(i < n) {
        if (requests[i] - requests[iAtu] < 1000) {
            simult++;
            i++;
            if (simult > max) max = simult;
        }
        else {
            simult--;
            iAtu++;
        }
    }
    int ans = ceil(max / k);
    printf("%d\n", ans);
    return 0;
}

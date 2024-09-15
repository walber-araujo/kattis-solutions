#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back
#define MAXN 50050

vector<int> va;
vector<int> vb;
int count(vector<int> va, vector<int> vb){
    int p1 = 0;
    int p2 = 100;
    int quebrar = 0;
    int maior = 0;
    while(1) {
        while(va[p1] == 0) {
            p1++;
            if (p1 > 100) {
                quebrar = 1;
                break;
            }
        }
        while(vb[p2] == 0) {
            p2--;
            if (p2 < 0) {
                quebrar = 1;
                break;
            }
        }

        if (quebrar) break;
        maior = max(maior, p1+p2);
        int m = min(va[p1], vb[p2]);
        va[p1] -= m;
        vb[p2] -= m;
    }
    return maior;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    va.assign(101, 0);
    vb.assign(101, 0);
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        va[a]++;
        vb[b]++;
        cout << count(va, vb) << endl;
    }

    return 0;
}
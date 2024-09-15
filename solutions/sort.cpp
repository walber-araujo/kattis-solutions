#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back
#define MAXN 50050

struct num_info {
    ll n;
    int f;
    int p;
    num_info() : n(0), f(0), p(0) {}
    num_info(ll num, int pos) : n(num), f(1), p(pos) {}
};

int compare(num_info num1, num_info num2) {
    if (num1.f != num2.f) return num1.f > num2.f;
    else return num1.p < num2.p;
}

int hoare(vector<num_info> &a, int ini, int fim) {
    int i = ini + 1;
    int j = fim;
    while (i <= j) {
        while (i <= j && compare(a[i], a[ini])) i++;
        while (i <= j && !compare(a[j], a[ini])) j--;
        if (i < j) swap(a[i], a[j]);
    }
    swap(a[j], a[ini]);
    return j;
}

void quickSort(vector<num_info> &a, int ini, int fim) {
    if (ini < fim) {
        int iP = hoare(a, ini, fim);
        quickSort(a, ini, iP - 1);
        quickSort(a, iP + 1, fim);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    ll c; cin >> c;

    vector<num_info> freq;
    
    for (int i = 0; i < n; i++) {
        ll num; cin >> num;
        bool found = false;
        for (auto &info : freq) {
            if (info.n == num) {
                info.f++;
                found = true;
                break;
            }
        }
        if (!found) {
            freq.pb(num_info(num, i));
        }
    }

    quickSort(freq, 0, freq.size() - 1);

    for (const auto &info : freq) {
        for (int i = 0; i < info.f; i++) {
            cout << info.n << " ";
        }
    }
    cout << endl;

    return 0;
}

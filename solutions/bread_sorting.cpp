#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back
#define MAXN 50050

ll merge(vector<int> &a, int ini, int mid, int fim) {
    ll inversoes = 0;
    vector<int> aux (fim - ini + 1);
    for (int i = ini; i <= fim; i++) aux[i - ini] = a[i];
    int i = 0, j = mid - ini + 1, k = ini;
    while(i <= mid - ini && j <= fim - ini) {
        if (aux[i] <= aux[j]) a[k++] = aux[i++];
        else {
            a[k++] = aux[j++];
            inversoes += (mid - ini + 1 - i);
        }
    }
    while (i <= mid - ini) a[k++] = aux[i++];
    while (j <= fim - ini) a[k++] = aux[j++];
    return inversoes;
}

ll mergeSort(vector<int> &a, int ini, int fim) {
    ll inversoes = 0;
    if (ini < fim) {
        int mid = (ini + fim) / 2;
        inversoes += mergeSort(a, ini, mid);
        inversoes += mergeSort(a, mid+1, fim);
        inversoes += merge(a, ini, mid, fim);
    }
    return inversoes;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    vector<int> a1(n);
    vector<int> a2(n);

    for (int i = 0; i < n; i++) cin >> a1[i];
    for (int i = 0; i < n; i++) cin >> a2[i];
    ll inv1 = mergeSort(a1, 0, n-1);
    ll inv2 = mergeSort(a2, 0, n-1);
    
    if (inv1 % 2 == 0 && inv2 % 2 == 0) cout << "Possible" << endl;
    else if (inv1 % 2 != 0 && inv2 % 2 != 0) cout << "Possible" << endl;
    else cout << "Impossible" << endl;

    return 0;
}

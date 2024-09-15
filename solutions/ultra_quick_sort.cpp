#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back
#define MAXN 50050

ll inversions = 0;

void merge(vector<ll> &a, int ini, int mid, int fim) {
    vector<int> aux(fim - ini + 1);
    for (int i = ini; i <= fim; i++) aux[i-ini] = a[i];

    int i = 0, j = mid - ini + 1, k = ini;
    while(i <= mid - ini && j <= fim - ini) {
        if (aux[i] <= aux[j]) a[k++] = aux[i++];
        else {
            a[k++] = aux[j++];
            inversions += (mid - ini + 1 - i);
        }
    }
    while (i <= mid - ini) a[k++] = aux[i++];
}

void mergeSort(vector<ll> &a, int ini, int fim) {
    if (ini >= fim) return;
    int mid = (ini + fim) / 2;
    mergeSort(a, ini, mid);
    mergeSort(a, mid+1, fim);
    merge(a, ini, mid , fim);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    mergeSort(a, 0, n-1);
    cout << inversions << endl;

    return 0;
}

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back
#define MAXN 50050

ll inversions = 0;

void merge(string &str, int ini, int mid, int fim) {
    string aux;
    for (int i = ini; i <= fim; i++) aux += str[i];

    int i = 0, j = mid - ini + 1, k = ini;

    while(i <= mid - ini && j <= fim - ini) {
        if (aux[i] <= aux[j]) str[k++] = aux[i++];
        else {
            str[k++] = aux[j++];
            inversions += (mid - ini + 1 - i);
        }
    }
    while(i <= mid - ini) str[k++] = aux[i++];
    while(j <= fim - ini) str[k++] = aux[j++];
}

void mergeSort(string &str, int ini, int fim) {
    if (ini < fim) {
        int mid = (ini + fim) / 2;
        mergeSort(str, ini, mid);
        mergeSort(str, mid+1, fim);
        merge(str, ini, mid , fim);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string num; cin >> num;
    mergeSort(num, 0, num.length()-1);
    cout << inversions << endl;

    return 0;
}

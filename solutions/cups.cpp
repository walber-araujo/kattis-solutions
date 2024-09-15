#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back
#define MAXN 50050

int hoare(vector<pair<int, string>> &a, int ini, int fim) {
    int pivot = a[ini].first;
    int i = ini+1;
    int j = fim;
    while(i <= j) {
        while(i <= j && a[i].first <= pivot) i++;
        while(j >= i && a[j].first > pivot) j--;
        if (i < j) swap(a[i], a[j]);
    }
    swap(a[ini], a[j]);
    return j;
}

void quickSort(vector<pair<int, string>> &a, int ini, int fim) {
    if (ini < fim) {
        int iP = hoare(a, ini, fim);
        quickSort(a, ini, iP-1);
        quickSort(a, iP+1, fim);
    }
}

bool isAlp(const string& str) {
    return !str.empty() && all_of(str.begin(), str.end(), ::isalpha);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    vector<pair<int, string>> cups(n);
    for (int i = 0; i < n; i++) {
        string a, b; cin >> a >> b;
        if (isAlp(a)) cups[i] = {stoi(b), a};
        else cups[i] = {stoi(a) / 2, b};
    }
    quickSort(cups, 0, n-1);
    for (int i = 0; i < n; i++) {
        cout << cups[i].second << endl;
    }

    return 0;
}

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back
#define MAXN 50050

int hoare(vector<int> &a, int ini, int fim) {
    int i = ini+1;
    int j = fim;
    int pivot = a[ini];
    while(i <= j) {
        while(i <= j && a[i] <= pivot) i++;
        while(j >= i && a[j] > pivot) j--;
        if (i < j) swap(a[i], a[j]);
    }
    swap(a[ini], a[j]);
    return j;
}

void quickSort(vector<int>&a, int ini, int fim) {
    if (ini < fim) {
        int pivot = hoare(a, ini, fim);
        quickSort(a, ini, pivot-1);
        quickSort(a, pivot+1, fim);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    for (int k = 1; k <= n; k++) {
        int s; cin >> s;
        vector<int> segmentsR;
        vector<int> segmentsB;
        for (int i = 0; i < s; i++) {
            string seg; cin >> seg;
            char type = seg.back();
            seg.pop_back();
            if (type == 'B') segmentsB.pb(stoi(seg));
            else segmentsR.pb(stoi(seg));
        }
        quickSort(segmentsB, 0, segmentsB.size()-1);
        quickSort(segmentsR, 0, segmentsR.size()-1);

        int len = 0;
        int iB = segmentsB.size()-1;
        int iR = segmentsR.size()-1;
        int segs = min(segmentsB.size(), segmentsR.size());
        while (iB >= 0 && iR >= 0) {
            len += segmentsB[iB--] + segmentsR[iR--];
        }

        len -= segs*2;
        cout << "Case #" << k << ": " << len << endl;
    }

    return 0;
}

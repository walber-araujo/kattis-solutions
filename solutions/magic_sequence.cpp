#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int BITS = 16;  
const int BASE = 1 << BITS;

void countingSort(vector<ll> &arr, vector<ll> &output, int exp) {
    int n = arr.size();
    vector<int> count(BASE, 0);

    for (int i = 0; i < n; i++)
        count[(arr[i] >> exp) & (BASE - 1)]++;
    
    for (int i = 1; i < BASE; i++)
        count[i] += count[i - 1];
    
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] >> exp) & (BASE - 1)] - 1] = arr[i];
        count[(arr[i] >> exp) & (BASE - 1)]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(vector<ll> &arr) {
    ll maxValue = *max_element(arr.begin(), arr.end());
    vector<ll> output(arr.size());

    for (int exp = 0; maxValue >> exp > 0; exp += BITS) {
        countingSort(arr, output, exp);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; 
    cin >> tc;
    
    while (tc--) {
        int n; 
        cin >> n;
        ll a, b, c; 
        cin >> a >> b >> c;
        ll x, y; 
        cin >> x >> y;
        
        vector<ll> s(n);
        s[0] = a;
        for (int i = 1; i < n; i++) 
            s[i] = (s[i - 1] * b + a) % c;
        
        radixSort(s);
        
        ll v = 0;
        for (int i = 0; i < n; i++) {
            v = (v * x + s[i]) % y;
        }
        cout << v << endl;        
    }

    return 0;
}

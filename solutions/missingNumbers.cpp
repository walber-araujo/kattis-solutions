#include "bits/stdc++.h"
typedef long long ll;
using namespace std;

void printMissing(int begin, int end) {
    for(int i = begin+1; i < end; i++) cout << i << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, currentNumber, previousNumber = 0, correct = 1; cin >> n;
    while(n--) {
        cin >> currentNumber;
        if (currentNumber > (previousNumber+1)){
            correct = 0;
            printMissing(previousNumber, currentNumber);
        }
        previousNumber = currentNumber;
    }

    if (correct) cout << "good job" << endl;

    return 0;
}
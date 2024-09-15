#include "bits/stdc++.h"
typedef long long ll;
using namespace std;

void updateValue(int limit, int *value, int increment, int *thinkValue) {
    *value += increment;
    *thinkValue += increment;
    if (*value > limit) *value = limit;
    if (*value < 0) *value = 0;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int w, l, n, y, first = 1;
    char x;

    while(1) {
        int curX = 0, curY = 0, thinkX = 0, thinkY = 0;
        cin >> w >> l;
        if ((w == 0) && (l == 0)) break;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x >> y;
            if (x == 'u') updateValue(l-1, &curY, y, &thinkY);
            else if (x == 'd') updateValue(l-1, &curY, -y, &thinkY);
            else if (x == 'r') updateValue(w-1, &curX, y, &thinkX);
            else if (x == 'l') updateValue(w-1, &curX, -y, &thinkX); 
        }
        if (first) {
            printf("Robot thinks %d %d\n", thinkX, thinkY);
            printf("Actually at %d %d\n", curX, curY);
            first = 0;
        }
        else {
            printf("\nRobot thinks %d %d\n", thinkX, thinkY);
            printf("Actually at %d %d\n", curX, curY);
        }
    }

    return 0;
}
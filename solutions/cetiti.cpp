#include "bits/stdc++.h"

using namespace std;
const int inf = 1e9+7;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int nums[3];
    int i = 0, dist;
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
    sort(nums, nums + 3);
    dist = nums[1] - nums[0];
    if ((nums[2] - nums[1]) < dist) {
        dist = nums[2] - nums[1];
    }
    
    if (nums[2] - nums[1] != dist) {
        cout << nums[1] + dist << endl;
    }
    else if (nums[1] - nums[0] != dist) {
        cout << nums[0] + dist << endl;
    }
    else cout << nums[2] + dist << endl;

    return 0;
}
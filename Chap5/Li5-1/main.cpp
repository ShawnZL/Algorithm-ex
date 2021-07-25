#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int MAXN = 10000;
int main() {
    int n, q, x, nums[MAXN], kase = 0;
    while(scanf("%d%d", &n, &q) == 2 && n) {
        printf("CASE# %d:", ++kase);
        for(int i = 0; i < n; i++) scanf("%d", &nums[i]);
        sort(nums, nums + n);
        while(q--) {
            scanf("%d", &x);
            int p = lower_bound(nums, nums + n, x) - nums;
            if(nums[p] == x)printf("%d found at %d\n", x, p + 1);
            else printf("%d not found\n", x);
        }
    }
    return 0;
}

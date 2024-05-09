#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l;
    cin >> l;
    while (l--)
    {
        int n, mid;
        int ans = 0;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums)
            cin >> i;
        sort(nums.begin(), nums.end());
        mid = nums[n / 2];
        for (auto &i : nums)
            ans += abs(i - mid);
        cout << ans << endl;
    }
    return 0;
}
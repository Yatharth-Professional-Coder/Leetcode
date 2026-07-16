class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd(n);

        int mx = 0;

        // Build prefixGcd
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            prefixGcd[i] = gcd(nums[i], mx);
        }

        // Sort
        sort(prefixGcd.begin(), prefixGcd.end());

        long long ans = 0;
        int i = 0, j = n - 1;

        while (i < j) {
            ans += gcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }

        return ans;
    }
};
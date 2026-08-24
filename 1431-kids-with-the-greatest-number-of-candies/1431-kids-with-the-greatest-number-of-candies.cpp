class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int mx = INT_MIN;

        // Find maximum candies
        for (int i = 0; i < candies.size(); i++) {
            mx = max(mx, candies[i]);
        }

        vector<bool> result;

        // Check each kid
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= mx) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }

        return result;
    }
};
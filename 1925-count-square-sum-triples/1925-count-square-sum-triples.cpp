class Solution {
public:
    int countTriples(int n) {
        vector<int>square;
        for (int i = 1; i <= n; i++) {
            square.push_back(i * i);
        }
        int count = 0;
        for (int a = 0; a < n; a++) {
            for (int b = 0; b < n; b++) {
                int sum = square[a] + square[b];
                int c = sqrt(sum);
                if (c <= n && c * c == sum) {
                    count++;
                }
            }
        }
        return count;
    }
};
class Solution {
public:
    int countTriples(int n) {
        int cnt = 0;
        for (int a = 3; a < n; a++){
            int sqrt_a = a * a;
            for (int b = 3; b < n; b++){
                int sqrt_sum = sqrt_a + b * b;
                int c = (int)std::sqrt(sqrt_sum);
                if (c > n)
                    break;
                if (c * c == sqrt_sum){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
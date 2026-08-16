class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int n=right;
        vector<int> ans(nums.size());
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                ans[n]=nums[left]*nums[left];
                left++;
            }else{
                ans[n]=nums[right]*nums[right];
                right--;
            }
            n--;

        }
        return ans;
    }
};
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int j=0;
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[j]+nums[i];
            j++;
        } 
        return nums;
    }
};
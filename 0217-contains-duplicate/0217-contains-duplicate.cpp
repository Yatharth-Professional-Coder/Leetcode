// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> s;
//         for(int num:nums){
//             if(s.count(num)){
//                 return true;

//             }
//             s.insert(num);
//         }
//         return false;

//     }
// };
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sorting array
        // for any same return true
        sort(nums.begin(),nums.end());
        if(nums.size()==1) return false;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
    }
};
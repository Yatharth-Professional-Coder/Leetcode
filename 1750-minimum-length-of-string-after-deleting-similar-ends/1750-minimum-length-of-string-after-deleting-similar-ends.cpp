class Solution {
public:
    int minimumLength(string s) {
        int left=0;
        int right=s.length()-1;
        char ch=' ';
        while(left<right && s[left]==s[right]){
            ch=s[left];
            while(left<=right && s[left]==ch){
                left++;
            }while(left<=right && s[right]==ch){
                right--;
            }

        }
        return (right-left+1);
    }
};
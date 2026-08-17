class Solution {
public:
    bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}
    bool validPalindrome(string s) {
        int time=0;
        int left=0;
        int right=s.length()-1;
        bool ans;
        if(isPalindrome(s)){
            ans = true;
        }else if(time==0 && !isPalindrome(s)){
            while(left<right){
                if(s[left]!=s[right]){
                    time++;
                    if(time>1){
                        ans= false;
                    }else{
                        string s1 = s.substr(left + 1, right - left);
                        string s2 = s.substr(left, right - left);
                        if(isPalindrome(s1) || isPalindrome(s2)){
                            ans=true;
                        }else{
                            ans=false;
                        }
                    }
                    return ans;

                }
                left++;
                right--;
            }
        }
        return ans;
    }
};
class Solution {
public:
     bool  ispalindrome(string s) {
        for(int i=0;i<s.length();i++) {
            if(s[i] != s[s.length()-1-i]) 
                return 0;
        }
        return 1;
    }
    int removePalindromeSub(string s) {
        if(s.length()==0) return 0; 
        return (ispalindrome(s)) ? 1 : 2;
        
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        //appraoch 1 = first remove all non char and convert it into lowercase
        string ans;
        for(int i=0; i <s.length();i++){
            if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' || s[i] >= '0' && s[i] <= '9'){
                if(s[i]>='A' && s[i]<='Z'){
                    ans+=s[i]+32;
                }else{
                    ans+=s[i];
                }
            }
        }

        for(int i =0; i < ans.length();i++){
            if(ans[i]!=ans[ans.length()-i-1]){
                 return false;
            }
        }
         return true;
    }
};
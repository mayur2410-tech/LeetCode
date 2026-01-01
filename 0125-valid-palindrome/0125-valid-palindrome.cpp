class Solution {
public:

bool isAlphanumeric(char c){
    if(c >='0' && c<='9' || tolower(c)>='a' && tolower(c)<='z'){
        return true;
    }

    return false;
}
    bool isPalindrome(string s) {
        //appraoch 1 = first remove all non char and convert it into lowercase
        // string ans;
        // for(int i=0; i <s.length();i++){
        //     if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' || s[i] >= '0' && s[i] <= '9'){
        //         if(s[i]>='A' && s[i]<='Z'){
        //             ans+=s[i]+32;
        //         }else{
        //             ans+=s[i];
        //         }
        //     }
        // }

        // for(int i =0; i < ans.length();i++){
        //     if(ans[i]!=ans[ans.length()-i-1]){
        //          return false;
        //     }
        // }
        //  return true;

        //approach 2 = using 2 pointer
        int st = 0 ;
        int end = s.length()-1;
        while(st<end){
            if(!isAlphanumeric(s[st])){
                st++;
                continue;
            }
            if(!isAlphanumeric(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st])!=tolower(s[end])){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};
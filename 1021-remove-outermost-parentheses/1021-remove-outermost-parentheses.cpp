class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int level = 0;
        for(int i=0 ; i <s.size();i++){
            if(s[i]=='('){
                if(level > 0 ){
                    ans+= s[i];
                }
                level++;
            }else if( s[i]==')'){
                level--;
                 if(level > 0 ){
                    ans+= s[i];
                }

            }
        }
        return ans;
    }
};
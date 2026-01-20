class Solution {
public:
    string reverseWords(string s) {
        string temp= "";
        string ans="";
        for(int i = s.size()-1; i>=0;i--){
            if(s[i] != ' '){
                temp += s[i];
            }else{
                if(!temp.empty()){
                    reverse(temp.begin(),temp.end());
                    ans += temp + " ";
                    temp.clear();
                }
            }
        }

        if(!temp.empty()){
            reverse(temp.begin(),temp.end());
            ans += temp;
        }else if(!ans.empty()){
            ans.pop_back();
        }

        return ans;
    }
};
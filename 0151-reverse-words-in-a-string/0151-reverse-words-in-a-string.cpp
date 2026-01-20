class Solution {
public:
    string reverseWords(string s) {
        //apracoh 1
        // string temp= "";
        // string ans="";
        // for(int i = s.size()-1; i>=0;i--){
        //     if(s[i] != ' '){
        //         temp += s[i];
        //     }else{
        //         if(!temp.empty()){
        //             reverse(temp.begin(),temp.end());
        //             ans += temp + " ";
        //             temp.clear();
        //         }
        //     }
        // }

        // if(!temp.empty()){
        //     reverse(temp.begin(),temp.end());
        //     ans += temp;
        // }else if(!ans.empty()){
        //     ans.pop_back();
        // }

        // return ans;

        // approach 2 = 
        string ans = "";
        reverse(s.begin(),s.end());
        for(int i = 0; i <s.size();i++){
                    string word = "";

            while( i < s.size() && s[i]!= ' '){
                word+= s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.size()>0){
                ans += " "+ word;
            }
        }
        return ans.substr(1);
    }
};
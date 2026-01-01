class Solution {
public:
    char findTheDifference(string s, string t) {
        // aproach 1 = using xor
        //  char ans  =0 ;
        //  for(int i = 0 ; i <s.length();i++){
        //      ans ^= s[i];
        //  }
        //  for(int i = 0 ; i <t.length();i++){
        //      ans ^= t[i];
        //  }

        // return ans;

        // appraoch 2 = using map
        unordered_map<char, int> m1;
        char ans;
        for (int i = 0; i < s.size(); i++) {
            m1[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++) {
            if(m1[t[i]]==0){
                return t[i];
            }else{
                m1[t[i]]--;
            }
           
        }
        return ' ';
    }
};
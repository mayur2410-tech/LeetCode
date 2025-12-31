class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minChar = INT_MAX;
        for(int i = 0 ; i <strs.size()-1;i++){
            int temp = 0 ;
            for(int j = 0 ; j <strs[i].length();j++){
                if(strs[i][j]==strs[i+1][j]){
                    temp++;
                }else{
                    break;
                }
            }
            minChar = min(minChar,temp);
        }
       
        return strs[0].substr(0,minChar);
    }
};
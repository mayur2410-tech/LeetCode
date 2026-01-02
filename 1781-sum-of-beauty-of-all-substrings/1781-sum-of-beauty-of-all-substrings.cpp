class Solution {
public:
    int beautySum(string s) {
        int sum =0;
        for(int i =0 ; i <s.size();i++){
            unordered_map<char,int> freq;
            for(int j = i ; j <s.size();j++){
                freq[s[j]]++;

                int mini = INT_MAX;
                int maxi = INT_MIN;
                for(auto i : freq){
                    mini = min(mini,i.second);
                    maxi = max(maxi,i.second);
                }
                sum+= (maxi-mini);
            }
        }
        return sum;
    }
};
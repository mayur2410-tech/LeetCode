class Solution {
public:
    string frequencySort(string s) {
    //     unordered_map<char,int> map;
    //     for(int i =0 ; i <s.size();i++){
    //         map[s[i]]++;
    //     }

    //     string ans= "";
    //     for(int i=0; i <s.size();i++){
    //        if(map[s[i]]==1){
    //         ans+=s[i];
    //        }
    //     }
    //     sort(ans.begin(),ans.end());
    //     reverse(ans.begin(),ans.end());

        
    
    //     int maxValue=0;
    //     for(auto i : map){
    //         if(i.second > maxValue){
    //             maxValue = i.second;
    //         }
    //     }
    //     for(auto i: map){
    //         if(i.second == maxValue){
    //             ans.insert(0,maxValue,i.first);
    //         }
    //     }

    //    return ans; 

    // apporach 2 
    // using bucket sort
    unordered_map<char,int> map;
    for(int i =0 ; i <s.length();i++){
        map[s[i]]++;
    }
    vector<vector<char>>bucket(s.length()+1);
    for(auto i : map){
        bucket[i.second].push_back(i.first);
    }
    string temp="";
    for(int i=s.length();i>=0;i--){
        for(char c: bucket[i]){
           temp.append(i,c);
        }
    }

    return temp;
       
        
        
    }
};
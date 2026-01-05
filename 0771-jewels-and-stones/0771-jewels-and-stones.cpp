class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       //brute force
    //    int count=0;
    //    for(int i =0 ; i <jewels.size();i++){
    //     for(int j =0; j <stones.size();j++){
    //         if(jewels[i]==stones[j]){
    //             count++;
    //         }
    //     }
    //    }
    //    return count;

    //ptimize approach
        unordered_set<char> s;
        int count=0;
        for(int i=0; i <jewels.size();i++){
            s.insert(jewels[i]);
        }
        for(int i=0; i <stones.size();i++){
            if(s.find(stones[i])!=s.end()){
                count++;
            }
        }
        return count;
    }
};
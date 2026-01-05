class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       //brute force
       int count=0;
       for(int i =0 ; i <jewels.size();i++){
        for(int j =0; j <stones.size();j++){
            if(jewels[i]==stones[j]){
                count++;
            }
        }
       }
       return count;
    }
};
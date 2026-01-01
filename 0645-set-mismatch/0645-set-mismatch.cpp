class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int> m;
        int len = nums.size();
        int actualSum = len*(len+1)/2;
        int currSum = 0 ;
        int repeated  = 0;
        for(int i =0; i <len ; i++){
            currSum+= nums[i];
            if(m.find(nums[i])!=m.end()){
                    repeated = nums[i];
            }else{
                m.insert(nums[i]);
            }
        }
        return {repeated, repeated-(currSum-actualSum)};
    }
};
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int>set;
        for(int i =0 ; i <nums.size();i++){
            if(set.find(nums[i])!=set.end()){
                return nums[i];
            }else{
                set.insert(nums[i]);
            }
           
        }
        return 0;
        
    }
};
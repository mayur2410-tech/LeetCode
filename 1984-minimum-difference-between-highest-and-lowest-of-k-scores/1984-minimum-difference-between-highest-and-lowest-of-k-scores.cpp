class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(nums.size()==1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        if(nums.size()==k){
            return nums[nums.size()-1] - nums[0];
        }

        int diff = nums[k-1] - nums[0];
        int maxDiff = diff;
      
        for(int i = k ; i <nums.size();i++){
            diff = nums[i] - nums[i-k+1];
            maxDiff = min(maxDiff,diff);
        }

        return maxDiff;
      
    }

};
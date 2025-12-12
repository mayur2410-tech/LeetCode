class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                sum+=nums[i]+nums[i+1];
                i++;
            }
        }
        return accumulate(nums.begin(),nums.end(),0)-sum;
    }
};
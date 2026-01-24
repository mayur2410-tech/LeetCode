class Solution {
public:
    int minPairSum(vector<int>& nums) {
        // apprach 1 = using sort and then pair
        sort(nums.begin(),nums.end());
        int maxSum = INT_MIN;
        int i =0 ;
        int j = nums.size()-1;
        while(i <=j){
            int sum = nums[i] + nums[j];
            maxSum = max(sum,maxSum);
            i++;
            j--;
        }

        return maxSum;
    }
};
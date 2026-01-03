class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // appraoch 1 = using vector and sort it
        vector<int>arr;
        for(int i =0; i<nums.size();i++){
            arr.push_back(nums[i]*nums[i]);
        }

         sort(arr.begin(),arr.end());
         return arr;
    }
};
class Solution {
public:
    bool valid(vector<int>& nums,int k ,int mid){
        int count = 0 ;
        int i = 0;
       while( i < nums.size()){
        if(nums[i] <= mid){
            count++;
            i += 2;
        }else{
            i += 1;
        }
       }
        return count >= k;
    }

        int minCapability(vector<int>& nums, int k) {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        int ans = 0;
        while (min <= max) {
            int mid = min + (max - min) / 2;
            if (valid(nums, k, mid)) {
                ans = mid;
                max = mid - 1;
            } else {
                min = mid + 1;
            }
        }
        return ans;
    }
};

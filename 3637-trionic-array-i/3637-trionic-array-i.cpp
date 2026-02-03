class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        if(nums[0]> nums[1]){
            return false;
        }
        int p=0,q=0,count=0;
        for(int i = 0 ; i <nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                p=i;
                count++;
                break;
            }
            if(nums[i]==nums[i+1]){
                return false;
            }
        }
        if(count!=1){
            return false;
        }
        for(int i = p ; i <nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                q=i;
                count++;
                break;
            }
             if(nums[i]==nums[i+1]){
                return false;
            }
        }
        if(count!=2){
            return false;
        }

        for(int i = q ; i <nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
             if(nums[i]==nums[i+1]){
                return false;
            }
        }
        
        return true;
    }
};
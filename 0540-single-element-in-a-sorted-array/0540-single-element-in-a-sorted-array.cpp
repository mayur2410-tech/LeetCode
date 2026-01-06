class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // apporach 1 = O(n) 
if(nums.size()==1){
    return nums[0];
}

        for(int i = 0 ; i <nums.size()-2;i=i+2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
                break;
            }
           
        }

        return nums[nums.size()-1];
    }
};
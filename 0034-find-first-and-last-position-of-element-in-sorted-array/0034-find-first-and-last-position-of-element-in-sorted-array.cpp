class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==1 && target==nums[0]){
            return {0,0};
        }
        int i =0 ; 
        int first =-1;
        int last =-1;
        while(i<nums.size()){
            if(nums[i]==target){
                first = i;
                break;
            }
            i++;
        }
        int j = first;
        while(j<nums.size()){
            if(nums[j]==target){
                last = j;
                
            }
            j++;
        }

        return {first,last};
    }
};
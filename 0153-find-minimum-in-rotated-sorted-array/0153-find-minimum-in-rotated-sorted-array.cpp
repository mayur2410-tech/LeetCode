class Solution {
public:
    int findMin(vector<int>& nums) {
        //approach 1 = in O(n) time complexity
        // int min = nums[0];
        // for(int i =0 ; i<nums.size();i++){
        //     if(nums[i]<min){
        //         min =nums[i];
        //     }
        // }
        // return min;

        //in appraoch 2 = bunary search 

        int st=0;
        int end = nums.size()-1;
        while(st<end){
            int mid = st + (end-st)/2;
            if(nums[mid] > nums[end]){
                st = mid+1;
            }else{
                end=mid;
            }
        }

        return nums[st];
    }
};
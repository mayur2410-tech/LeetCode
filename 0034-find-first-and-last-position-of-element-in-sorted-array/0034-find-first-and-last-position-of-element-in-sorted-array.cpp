class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //appraoch 1 = two loops o(n)
        if(nums.size()==1 && target==nums[0]){
            return {0,0};
        }
        // int i =0 ; 
        // int first =-1;
        // int last =-1;
        // while(i<nums.size()){
        //     if(nums[i]==target){
        //         first = i;
        //         break;
        //     }
        //     i++;
        // }
        // int j = first;
        // while(j<nums.size()){
        //     if(nums[j]==target){
        //         last = j;
                
        //     }
        //     j++;
        // }

        // return {first,last};
        
        //appraoch 2 = binary search
    
        int st=0; 
        int first =-1;
        int end = nums.size()-1;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(nums[mid]==target){
                first=mid;
                end = mid-1;
            }else if(target > nums[mid]){
                st=mid+1;
            }else{
                end = mid-1;
            }
        }
        st = 0;
end = nums.size() - 1;
        int last=-1;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(nums[mid]==target){
                last=mid;
                st = mid+1;
            }else if(target > nums[mid]){
                st=mid+1;
            }else{
                end = mid-1;
            }
        }

        return{first,last};
        
    }
};
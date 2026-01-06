class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // apporach 1 = O(n) 
// if(nums.size()==1){
//     return nums[0];
// }

//         for(int i = 0 ; i <nums.size()-2;i=i+2){
//             if(nums[i]!=nums[i+1]){
//                 return nums[i];
//                 break;
//             }
           
//         }

//         return nums[nums.size()-1];

// appraoch 2 = using binary search
 
 int st =0 ;
 int end = nums.size()-1;
 while(st<end){
    int mid = st + (end-st)/2;
    if(mid%2==1){
        mid--;
    }
    if(nums[mid]==nums[mid+1]){
        st = mid+2;
    }else{
        end = mid;
    }
 }
 return nums[st];

    }
};
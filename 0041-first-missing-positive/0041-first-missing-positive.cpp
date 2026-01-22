class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // appraoch 1 = it take  o(n)
        // unordered_set <int> s;
        // for(int i=0; i <nums.size();i++){
        //     s.insert(nums[i]);
        // }
        //     int target = 1;
        // while(true){
        //         if(s.find(target)==s.end()){
        //             return target;
        //         }
               
        //             target++;
                
        // }
        // return 0;
        // appporach 2 = using cyclic sort
        int n = nums.size();
        int i =  0 ; 
        while(i < n){
            if(nums[i]>=1 && nums[i]<=n ){
                int correctIdx = nums[i]-1;
                if(nums[i]!=nums[correctIdx]){
                    swap(nums[i],nums[correctIdx]);
                    continue;
                }
            }
            i++;
        }
     for(int i =0; i <n ; i++){
        if(nums[i]!= i+1){
            return i+1;
        }
     }

     return n+1;
    }
};
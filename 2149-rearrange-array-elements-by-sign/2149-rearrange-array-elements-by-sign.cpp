class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // apprach 1 = using 2 list we store positive and negeative then push it again to new ans 
        // Complexity = time [O(n)] and space [O(n)]
        // vector<int>pos;
        // vector<int>neg;
        // for(int i =0 ; i <nums.size();i++){
        //     if(nums[i]>0){
        //         pos.push_back(nums[i]);
        //     }else{
        //         neg.push_back(nums[i]);
        //     }
        // }
        // vector<int> ans;
        // int i=0;
        // while(i<pos.size()){
        //     ans.push_back(pos[i]);
        //     ans.push_back(neg[i]);
        //     i++;
        // }

        // return ans;

        // appraoch 2
        int pos = 0 , neg = 1;
        vector<int>ans(nums.size(),0);
        for(int i =0 ; i <nums.size();i++){
            if(nums[i]>0){
                ans[pos]=nums[i];
                pos+=2;
            }else{
                ans[neg]=nums[i];
                neg+=2;
            }
        }

        return ans;

        
    }
};
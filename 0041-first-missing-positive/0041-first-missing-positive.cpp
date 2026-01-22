class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set <int> s;
        for(int i=0; i <nums.size();i++){
            s.insert(nums[i]);
        }
            int target = 1;
        while(true){
                if(s.find(target)==s.end()){
                    return target;
                }
               
                    target++;
                
        }
        return 0;
    }
};
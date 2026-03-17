class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(nums.size()==threshold){
            return *max_element(nums.begin(),nums.end());
        }

        int minDivisor = 1;
        int maxDivisor = *max_element(nums.begin(),nums.end());
        int divisor  = 0;

        while(minDivisor <= maxDivisor){
            int midDivisor = minDivisor + (maxDivisor - minDivisor)/2;
            int ans = 0 ;
            for(int i = 0 ; i < nums.size();i++){
                ans += (nums[i]+midDivisor - 1) / midDivisor;
            }
            
            if(ans <= threshold){
                divisor  = midDivisor;
                maxDivisor = midDivisor - 1 ;
            }else{
                minDivisor = midDivisor + 1;
            }
          
        }
        return divisor ;
    }
};
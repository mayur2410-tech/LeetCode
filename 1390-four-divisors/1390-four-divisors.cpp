class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int finalSum =0 ; 
        for(int i=0 ; i <nums.size();i++){
            int len =0;
            int sum=0;
          for(int j=1 ; j*j<=nums[i];j++){
            if(nums[i]%j==0){
                int other = nums[i]/j;
                sum += j;
                len++;
                 if(other!=j){
                sum+=other;
                len++;
            }
            }
           
            if(len>4){
                break;
            }
          }
          if(len==4){
            finalSum += sum;
          }
        }
        return finalSum;

    }
};
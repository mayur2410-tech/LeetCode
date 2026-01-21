class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //  vector<int> ans = digits; // make a safe copy

        // int carry = 1;
        // for(int i = ans.size()-1; i >= 0; i--) {
        //     int sum = ans[i] + carry;
        //     ans[i] = sum % 10;
        //     carry = sum / 10;
        // }

        // if(carry == 1) {
        //     ans.insert(ans.begin(), 1);
        // }

        // return ans;

        int i = digits.size()-1;
        while(i>=0){
            if(digits[i]!=9){
                digits[i]++;
                return digits;
            }else{
                digits[i]=0;
            }
            i--;
        }

         digits.insert(digits.begin(),1);
         return digits;

    }
};
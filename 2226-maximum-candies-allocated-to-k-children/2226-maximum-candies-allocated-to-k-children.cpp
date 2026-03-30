class Solution {
public:



bool isValid(vector<int>& candies,long long k, long long mid ){
        long long count = 0;
        for(int i =0; i<candies.size();i++){
            count += candies[i]/mid;
        }
        if(count >= k){
            return true;
        }else{
            return false;
        }
}

    int maximumCandies(vector<int>& candies, long long k) {
        if(accumulate(candies.begin(),candies.end(),0LL) < k){
            return 0;
        }
        long long min = 1;
        long long max = *max_element(candies.begin(),candies.end());
        int ans = 0;
        while(min <= max){
            long long mid = min + (max - min)/2;
            if(isValid(candies,k,mid)){
                ans = mid ;
                min =  mid + 1;
            }else{
                max = mid - 1;
            }
        }
        return ans;
        
    }
};
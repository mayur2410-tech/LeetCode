class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // appprcoh 1 but risk in k value
        // long long time = 0 ;
        // int k =1 ;
        // int max = *max_element(piles.begin(), piles.end());
        // while(k<=max){
        // for(int i = 0 ; i <piles.size();i++){
        //     time += (piles[i] + k - 1) / k;
        // }
        // if(time<=h){
        //     return k;
        //     break;
        // }else{
        //     time = 0;
        // }
        // k++;
        // }
        // return -1;


        //using binary search
        int st = 1;
        int end = *max_element(piles.begin(), piles.end());
        int ans = end;
        while(st<=end){
            int mid = st + (end-st)/2;
            long long time = 0 ;
            for(int i = 0 ; i < piles.size() ; i++){
                time += (piles[i] + mid - 1) / mid;
            }

            if(time<=h){
                ans = mid;
                end = mid -1 ;
            }else{
                st = mid +1;
            }
        }
        return ans;
    }
};
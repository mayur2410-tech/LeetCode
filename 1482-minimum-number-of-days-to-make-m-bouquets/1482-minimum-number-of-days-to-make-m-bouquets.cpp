class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long s = 1LL * m * k;
        if(s > bloomDay.size()){
            return -1;
        }
        
        //int minDay = *min_element(bloomDay.begin(), bloomDay.end());
        //int maxDay = *max_element(bloomDay.begin(), bloomDay.end());
        //  for(int i = minDay ;  i<=maxDay ; i++ ){
        //      int count = 0;
        //     int bouquets = 0;
        //     for(int j = 0 ; j<bloomDay.size();j++){
        //         if(bloomDay[j] <= i ){
        //             count++;
        //         }else{
        //              bouquets += count/k;
        //              count = 0;
        //         }

        //         if(bouquets>=m){
        //             return i;
        //         }
        //     }
        //      bouquets += count/k;
        //      if(bouquets>=m){
        //             return i;
        //         }

        // }

        // return -1;

        // approach 2 = binary search

         int stDay = *min_element(bloomDay.begin(), bloomDay.end());
         int endDay = *max_element(bloomDay.begin(), bloomDay.end());
         int ans = -1;
         while(stDay <= endDay ){
            int midDay = stDay + (endDay - stDay)/2;
            int count = 0 ;
            int bouquets = 0;
            

            for(int i = 0 ; i <bloomDay.size();i++){
                if(bloomDay[i] <= midDay ){
                    count++;
                }else{
                    bouquets += count/k;
                    count = 0 ; 
                }
            }

            bouquets += count/k;
             if(bouquets >= m){
                    ans = midDay;
                    endDay = midDay-1;
                }else{
                    stDay = midDay + 1;
                }
         }
         return ans;
        


    }
};
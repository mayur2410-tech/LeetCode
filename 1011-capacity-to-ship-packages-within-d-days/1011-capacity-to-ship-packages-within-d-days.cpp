class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int minCapacity = *max_element(weights.begin(),weights.end());
        int maxCapacity =  accumulate(weights.begin(),weights.end(),0);
        int capacity = 0 ;
        
        while(minCapacity <= maxCapacity){
            int midCapacity = minCapacity + (maxCapacity - minCapacity)/2;
                int totalWeight = 0 ;
                int day = 1 ;
            for(int i = 0 ; i<weights.size();i++){

                if( totalWeight + weights[i] > midCapacity){
                    day++;
                    totalWeight =  weights[i];
                }else{
                     totalWeight += weights[i];
                }
            }  
            if(day <= days){
                capacity =  midCapacity;
                maxCapacity = midCapacity - 1;
            }else{
                minCapacity = midCapacity + 1;
            }
        }
        return capacity;
    }
};
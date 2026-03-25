class Solution {
public:

bool isValidTime(vector<int>& dist , double hr , int mid){
double time = 0 ;
    for(int i = 0 ; i <dist.size();i++){
       if( i != dist.size() -1 ){
         time +=  (dist[i]+mid -1) /mid;
       }else{
        time += (double)dist[i]/mid;
       }
    }

    

    if(time <= hr){
        return true;
    }else{
        return false;
    }
};
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int min = 1;
        int max = 1e7;
        int ans= -1;
        while(min <= max){
            int mid = min + (max - min)/2;
            if(isValidTime(dist,hour,mid)){
                ans = mid;
                max = mid - 1;
            }else{
                min = mid +1;
            }
        }
        return ans;
    }
};
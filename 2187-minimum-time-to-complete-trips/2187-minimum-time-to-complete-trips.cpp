class Solution {
public:

bool isValidTime(vector<int>& time, int totalTrips,long long mid){
    long long t = 0;
    for(int i =0; i<time.size();i++){
        t += mid / time[i];
    }

    return t >= totalTrips;
}
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long min = 1;
        long long max = (long long)*min_element(time.begin(),time.end()) * totalTrips ;
        long long ans = 0;
        while(min <= max){
            long long mid = min + (max - min)/2;
            if(isValidTime(time,totalTrips,mid)){
                ans = mid;
                max = mid - 1;
            }else{
                min = mid + 1;
            }
        }
        return ans;
    }
};
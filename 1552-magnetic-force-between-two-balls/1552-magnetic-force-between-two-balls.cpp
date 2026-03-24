class Solution {
public:

bool isPossible(vector<int>& position, int m, int mid){
        int ball = 1;
        int lastPosition = position[0];
        for(int i =1 ; i < position.size();i++){
            if(position[i] - lastPosition  >= mid){
                ball++;
                lastPosition = position[i];
            }
            if(ball == m){
                return true;
            }
        }
        return false;
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int min = 1;
        int max = position[position.size()-1] - position[0];
        int ans = -1;
        while(min <= max){
            int mid = min + (max - min)/2;
            if(isPossible(position,m,mid)){
                ans = mid;
                min = mid + 1;
            }else{
                max = mid  - 1;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int maxArea(vector<int>& h) {
        int i =0 ; 
        int j = h.size()-1;
        int gap= h.size()-1;
        int waterlevel = INT_MIN;
        while(i<=j){
            int water = 0;
            if(h[i]<h[j]){
                water = h[i] * gap;
                i++;
            }else{
                water = h[j]*gap;
                j--;
            }
            waterlevel = max(water,waterlevel);
            gap--;
        }
        return waterlevel;
    }
};
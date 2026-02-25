class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size() , n = mat[0].size();
        int strow= 0 , endrow = m-1 ,stcol = 0, endcol = n-1;
        vector<int>ans;
        while(strow<=endrow && stcol <= endcol){
            //top row
            for(int j = stcol ; j<=endcol;j++){
                ans.push_back(mat[strow][j]);
            }
            //right col
            for(int i=strow+1;i<=endrow;i++){
                ans.push_back(mat[i][endcol]);
            }
            //bottom row
            for(int j = endcol-1 ; j>=stcol;j--){
                if(strow==endrow){
                    break;
                }
                ans.push_back(mat[endrow][j]);
            }
            //left col
              for(int i=endrow-1;i>=strow+1;i--){
                if(stcol ==endcol){
                    break;
                }
                ans.push_back(mat[i][stcol]);
            }
            strow++ , endrow--, stcol++, endcol--;
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>map;
        int len = grid.size()*grid[0].size();
        int actualSum = len*(len+1)/2;
        int currSum = 0;
        int repeated = 0;
        for(int i = 0 ; i<grid.size();i++ ){
            for(int j = 0; j<grid[0].size();j++){
                currSum += grid[i][j];
                map[grid[i][j]]++;
                if(map[grid[i][j]] > 1){
                    repeated = grid[i][j];
                }
            }
        }

        return {repeated,repeated-(currSum-actualSum)} ;


    }
};
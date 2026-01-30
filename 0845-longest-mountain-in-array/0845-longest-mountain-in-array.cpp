class Solution {
public:
    int longestMountain(vector<int>& arr) {
            int ans = 0 ;

        for (int i=1 ; i <arr.size()-1;i++){
            
            // first check if it peak element
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                                int count = 1; 


                //go to left 
                int left = i ;
                while( left > 0 &&  arr[left] > arr[left-1]){
                    left--;
                    count++;
                }

                //go to right 
                int right = i ;
                while(right < arr.size()-1 && arr[right]> arr[right +1 ] ){
                    right ++;
                    count ++;
                }

                ans = max(ans ,count);

                i = right;
            }
        }
        return ans;
    }
};
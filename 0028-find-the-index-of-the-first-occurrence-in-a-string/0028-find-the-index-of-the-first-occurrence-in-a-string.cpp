class Solution {
public:
    int strStr(string haystack, string needle) {
        // appraoch 1 = with function 
    //    size_t pos = haystack.find(needle);
    //    if(pos!= string::npos){
    //     return pos;
    //    }
    //    return -1;

    // approach 2 = manula find using substr

    int m = haystack.size();
    int n = needle.size();
    for(int i = 0 ; i <= m - n ;i++){
        if(haystack.substr(i,n)== needle){
            return i;
        }
    }
    return -1;
    }
};
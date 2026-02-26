class Solution {
public:
    int numSteps(string s) {
        // long long n = stoi(s);   //to convert the string in number 
        // int i =0 ;
        // int ans = 0 ;
        // while(n!=0){
        //     int digit = n % 10;
        //     if(digit==1){
        //         ans+= pow(2,i);
        //     }
        //     n=n/10;
        //     i++;
        // }
        //     int count =0;
        //     // cout<<"ans1"<<ans;
        // while(ans!=1){
        //         if(ans%2 != 0){
        //             ans+=1;
        //             count++;
        //         }
        //         ans/=2;
        //         count++;

        // }
        // // cout<<"ans2"<<ans;

        // return count;

        int steps=0;

        while (s != "1") {

    if (s.back() == '0') {

        s.pop_back();

    } else {

        int i = s.size() - 1;

        while (i >= 0 && s[i] == '1') {
            s[i] = '0';
            i--;
        }

        if (i >= 0)
            s[i] = '1';
        else
            s = '1' + s;
    }

    steps++;
}

return steps;
    }
       
    
};
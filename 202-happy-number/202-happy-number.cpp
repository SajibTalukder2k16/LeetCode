class Solution {
public:
    bool isHappy(int n) {
        map<int,bool>mp;
        int val;
        int sum = 0;
        while(mp[n]==false){
            mp[n]=true;
            while(n){
                val = n%10;
                sum+=(val*val);
                n/=10;
            }
            n = sum;
            sum = 0;
            if(n==1)
                return true;
        }
        return false;
        
    }
};
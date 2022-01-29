class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x/10==0)
            return true;
        int y = x;
        long long z=0;
        while(x!=0){
            z=(z*10)+(x%10);
            x/=10;
        }
        return y==z;
        
    }
};
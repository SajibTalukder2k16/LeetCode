class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(n){
            if(n%2==0){
                n/=2;
            }
            else{
                if(n==1)
                    return true;
                return false;
            }
        }
        if(n==1)
            return true;
        return false;
    }
};
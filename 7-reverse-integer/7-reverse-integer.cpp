class Solution {
public:
    int reverse(int x) {
        int mx_val = 2147483647;
        int min_val = -2147483648;
        long long z=0;
        bool sign=true;;
        if(x<0)
            sign=false;
        while(x!=0){
            if(sign==true)
            {
                if((z*10)+(x%10)>mx_val)
                    return 0;
            }
            else{
                if((z*10)+(x%10)<min_val)
                    return 0;
            }
            z=(z*10)+(x%10);
            x/=10;
        }

        return z;
        
    }
};
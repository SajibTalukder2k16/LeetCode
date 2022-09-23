class Solution {
public:
    int mySqrt(int x) {
        long low = 0;
        long high = 50000;
        long mid;
        while(high>=low){
            mid = (high+low)/2;
            // cout<<mid*mid<<" "<<x<<" "<< (mid+1)*(mid+1)<<endl;
            if(mid*mid <= x && (mid+1)*(mid+1)>x)
                return mid;
            else if(mid*mid>x)
                high = mid -1;
            else
                low = mid + 1;
        }
        return mid;
    }
};
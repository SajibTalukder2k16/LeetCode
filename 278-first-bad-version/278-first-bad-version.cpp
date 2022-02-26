// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long high = n;
        long long low =1;
        long long mid;
        while(high>low){
            mid=(high+low)/2;
            if(isBadVersion(mid)==true)
            {
                high=mid;
            }
                
            else
                low=mid+1;
        }
        //ut<<low<<" "<<mid<<" "<<high<<endl;
        return low;
    }
};
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz = digits.size();
        if(digits[sz-1]!=9)
            digits[sz-1]++;
        else{
            sz--;
            for(;sz>=0 && digits[sz]==9;sz--){
                digits[sz]=0;
            }
            if(digits[0]==0)
            {
                digits[0]=1;
                digits.push_back(0);
                return digits;   
            }
            digits[sz]++;
            
        }
        return digits;
        
        
    }
};
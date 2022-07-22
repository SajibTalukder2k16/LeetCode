class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int added[] = {1,2,3,4,5,6,7,8,9};
        int sz = digits.size();
        
        if(digits[sz-1]!=9)
            digits[sz-1]=added[digits[sz-1]];
        else{
            while(digits[sz-1]==9){
                digits[sz-1]=0;
                sz-=1;
                if(sz==0)
                    break;
            }
            if(sz==0)
            {
                digits[0]=1;
                digits.push_back(0);
            }
            else
                digits[sz-1]=added[digits[sz-1]];
            
        }
        return digits;
        
        
    }
};
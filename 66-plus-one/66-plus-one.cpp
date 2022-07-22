class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int added[] = {1,2,3,4,5,6,7,8,9,0};
        int sz = digits.size();
        
        if(digits[sz-1]!=9)
            digits[sz-1]=added[digits[sz-1]];
        else{
            while(digits[sz-1]==9){
                digits[sz-1]=added[digits[sz-1]];
                sz-=1;
                if(sz==0)
                    break;
            }
            if(sz==0){
                vector<int>first;
                first.push_back(1);
                first.insert(first.end(),digits.begin(),digits.end());
                return first;
            }
            digits[sz-1]=added[digits[sz-1]];
        }
        return digits;
        
        
    }
};
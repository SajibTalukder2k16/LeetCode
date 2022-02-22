class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len=columnTitle.length();
        long long prefixSum[8]={0};
        long long mulVal[8];
        mulVal[0]=1;
        long long ret=0;prefixSum[len-1];
        for(int i=1,j=len-1;j>=0;j--,i++)
        {
            mulVal[i]=mulVal[i-1]*26;
            prefixSum[i]+=prefixSum[i-1]+mulVal[i];
            ret+=(columnTitle[j]-'A')*mulVal[i-1];
        }
        ret+=prefixSum[len-1];
        ret++;
        return ret;
        
        
    }
};
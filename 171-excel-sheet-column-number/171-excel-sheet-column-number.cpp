class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len=columnTitle.length();
        long long prefixSum[8]={0};
        long long mulVal[8];
        mulVal[0]=1;
        for(int i=1;i<=len;i++)
        {
            mulVal[i]=mulVal[i-1]*26;
            prefixSum[i]+=prefixSum[i-1]+mulVal[i];
        }
        long long ret=prefixSum[len-1];
        for(int i=0,j=len-1;j>=0;j--,i++)
        {
            ret+=(columnTitle[j]-'A')*mulVal[i];
        }
        ret++;
        return ret;
        
        
    }
};
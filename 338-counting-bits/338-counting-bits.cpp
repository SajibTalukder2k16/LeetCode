
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>vec(n+1);
        vec[0]=0;
        for(int i=1;i<=n;i++){
            int cnt=0;
            int val=i;
            while(val){
                if(val&1)
                    cnt++;
                val/=2;
                //cout<<val<<" "<<cnt<<endl;
            }
            vec[i]=cnt;
        }
        return vec;
    }
};
class Solution {
public:
    int myAtoi(string s) {
        bool sign=true;
        int len=s.length();
        long long num=0;
        int i=0;
        long long max_value=2147483648;
        for(i=0;i<len;i++)
        {
            if(s[i]==' ')
                continue;
            else
                break;
        }
        // cout<<i<<endl;
        if(s[i]=='-'||s[i]=='+')
        {
            if(s[i]=='-')
                sign=false;
            i++;
        }
        // cout<<i<<endl; 
        for(;i<len;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                if(sign && (num*10)+s[i]-'0'<=max_value-1)
                {
                    num*=10;
                    num+=(s[i]-'0');
                }
                else if(sign && !((num*10)+s[i]-'0'<=max_value-1))
                {
                    num=max_value-1;
                    break;
                }
                else if(sign==false && (num*10)+s[i]-'0'<=max_value)
                {
                    num*=10;
                    num+=(s[i]-'0');
                }
                else if(sign==false && !((num*10)+s[i]-'0'<=max_value))
                {
                    num=max_value;
                    break;
                }
            }
            else
                break;
            // cout<<num<<endl;
        }
        if(sign)
            return num;
        else
            return -num;
        
    }
};
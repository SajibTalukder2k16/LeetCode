class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>push_stack;
        int lenPushed = pushed.size();
        int lenPopped = popped.size();
        if(lenPopped==0)
            return true;
        int i=0,j=0;
        int top=-1;
        while(true){
            if(j==lenPopped)
                break;
            if(!push_stack.empty())
                top=push_stack.top();
            if(top==popped[j]){
                while(top==popped[j]){
                    push_stack.pop();
                    j++;
                    if(!push_stack.empty())
                        top=push_stack.top();
                    else
                        break;
                    if(j==lenPopped)
                        break;
                }
                if(j==lenPopped)
                    break;
            }
            else{
                if(i==lenPushed)
                    break;
                push_stack.push(pushed[i]);
                i++;
                
            }
        }
        if(j==lenPopped)
            return true;
        return false;
    }
};
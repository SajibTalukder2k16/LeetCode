class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int area = 0;
        while(right>left){
            int rValue = height[right];
            int lValue = height[left];
            area = max(area,min(rValue,lValue)*(right-left));
            if(rValue>lValue)
                left++;
            else
                right--;
        }
        return area;
    }
};
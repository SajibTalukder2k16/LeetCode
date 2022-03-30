class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int low = 0;
        int mid;
        while(high>=low){
            mid=(high+low)/2;
            if(nums[mid]==target)
                return true;
            else if(nums[mid]>target){
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int searchableRow=-1;
        for(int i=1;i<row;i++){
            if(matrix[i][0]>target && target>=matrix[i-1][0]){
                searchableRow=i-1;
                break;
            }
        }
        if(searchableRow==-1)
            searchableRow=row-1;
        return search(matrix[searchableRow],target);
            
    }
};
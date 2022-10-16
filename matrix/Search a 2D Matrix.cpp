class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int j=mat[0].size()-1;
        int i=0;
        while(j>=0&&i<mat.size())
        {
            if(mat[i][j]==target)
                return true;
            else if(mat[i][j]<target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
    }
};

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i = matrix.size()-1, j = matrix[0].size()-1;
        
        for(int i=0;i<(matrix.size());i++)
            for(int j=0;j<matrix.size();j++)
                if(j>i) swap(matrix[i][j], matrix[j][i]);
        
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<(matrix[0].size())/2;j++)
                swap(matrix[i][j], matrix[i][matrix[0].size()-1-j]);
    }
};

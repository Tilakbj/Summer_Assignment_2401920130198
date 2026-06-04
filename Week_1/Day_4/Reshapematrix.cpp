class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {int row=mat.size(),col=mat[0].size(),idx,new_row,new_col;
        vector<vector<int>>ans(r,vector<int>(c));
        if(row*col!=r*c)return mat;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
            idx=i*col + j;
            new_row=idx/c;
            new_col=idx%c;
            ans[new_row][new_col]=mat[i][j];
            }
        }
            return ans;
        }
        
    
};
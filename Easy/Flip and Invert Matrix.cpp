vector<vector<int>> solve(vector<vector<int>>& matrix) {
    for(int i=0;i<matrix.size();i++){
        int k = (matrix[i].size()&1) ? (matrix[i].size()/2):(matrix[i].size()/2)-1;
        for(int j=0;j<=k;j++){
            if(matrix[i].size()-1-j!=j) matrix[i][matrix[i].size()-1-j]^=1;
            matrix[i][j]^=1;
            swap((matrix[i][matrix[i].size()-1-j]),matrix[i][j]);
        }
    }
    return matrix;
}

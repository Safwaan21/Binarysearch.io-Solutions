int solve(vector<vector<int>>& matrix) {
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(i==0 && j==0) continue;
            else if(i==0) matrix[i][j]+=matrix[i][j-1];
            else if(j==0) matrix[i][j]+=matrix[i-1][j];
            else matrix[i][j]+=max(matrix[i-1][j],matrix[i][j-1]);
        }
    }
    return matrix[matrix.size()-1][matrix[0].size()-1];
}

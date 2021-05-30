vector<vector<int>> solve(vector<vector<int>>& matrix) {
    unordered_set<int> row,column;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(!matrix[i][j]){
                row.insert(i);
                column.insert(j);
            }
        }
    }
    for(auto& u:row){
        for(int j=0;j<matrix[u].size();j++){
            matrix[u][j]=0;
        }
    }
    for(auto& u:column){
        for(int i=0;i<matrix.size();i++){
            matrix[i][u]=0;
        }
    }
    return matrix;
}

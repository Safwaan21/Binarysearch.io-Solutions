int dr[] = {0,0,1,-1,1,1,-1,-1};
int dc[] = {1,-1,0,0,1,-1,-1,1};

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    vector<vector<int>> ans;
    for(int i=0;i<matrix.size();i++){
        ans.push_back({});
        for(int j=0;j<matrix[i].size();j++){
            int living=0;
            for(int k=0;k<8;k++){
                int ii = i+dr[k], jj = j+dc[k];
                if(ii >=0 && ii<matrix.size() && jj>=0 && jj<matrix[i].size()) if(matrix[ii][jj])living++;
            }
            if(matrix[i][j] && (living==2 || living==3)) ans[i].push_back(1);
            else if (!matrix[i][j] && living==3) ans[i].push_back(1);
            else ans[i].push_back(0);
        }
    }

    return ans;
}

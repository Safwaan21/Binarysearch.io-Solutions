int dp[505][505];
int dr[] = {0,0,-1,1},dc[]={1,-1,0,0};

bool pos(int& i, int& j,int& n,int& m){
    if(i<0 || i>=n || j<0 || j>=m) return false;
    return true;
}

int sol(vector<vector<int>>& matrix,int& i, int& j,int& n,int& m){
    if(dp[i][j]!=-1) return dp[i][j];

    int ans=1;
    for(int k=0;k<4;k++){
        int ii = i+dr[k],jj = j + dc[k];
        if(pos(ii,jj,n,m)) if(matrix[ii][jj] > matrix[i][j])ans = max(ans, 1+sol(matrix,ii,jj,n,m));
    }
    dp[i][j]=ans;
    return dp[i][j];
}

int solve(vector<vector<int>>& matrix) {
    int ans=-1;
    int n = matrix.size(),m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) dp[i][j]=-1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans = max(ans, sol(matrix,i,j,n,m));
        }
    }
    return ans;
}

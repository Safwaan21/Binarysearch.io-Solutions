int solve(string a, string b) {
    int lcs=0;
    vector<vector<int>> dp(a.size()+1,vector<int>(b.size()+1,0));
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j]){
                dp[i+1][j+1] = dp[i][j]+1;
            }
            dp[i+1][j+1] = max({dp[i+1][j+1],dp[i][j+1],dp[i+1][j]});
        }
    }
    lcs = dp[a.size()][b.size()];
    return a.size() + b.size() - 2*lcs;
}

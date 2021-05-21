// Could use seg to make faster + iterative

vector<vector<int>> dp;

int sol(vector<int>& nums0, vector<int>& nums1, int n, int m, int nn, int dist, int cost, int l){
    if(nn < 0) return 1e9;

    if(dp[nn][l]!=-1) return dp[nn][l];

    int s = 1e9;
    for(int i=1;i<=dist;i++){
        s = min(s,sol(nums0,nums1,n,m,nn-i,dist,cost,l^1)+cost);
        s = min(s,sol(nums0,nums1,n,m,nn-i,dist,cost,l));
    }
    if(l) s+=nums1[nn];
    else s+=nums0[nn];
    dp[nn][l] = s;
    return dp[nn][l];
}

int solve(vector<int>& nums0, vector<int>& nums1, int dist, int cost) {
    int n = nums0.size(),m = nums1.size();
    if(!n || !m) return 0;
    int ans=1e9;
    dp.clear();
    dp.resize(max(n,m)+1,vector<int>(2,-1));
    dp[0][0] = nums0[0];dp[0][1] = nums1[0];
    ans = min(sol(nums0,nums1,n,m,n-1,dist,cost,0),sol(nums0,nums1,n,m,m-1,dist,cost,1));
    return ans;
}

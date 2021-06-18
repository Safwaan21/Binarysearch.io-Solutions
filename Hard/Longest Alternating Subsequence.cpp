int solve(vector<int>& nums) {
    vector<vector<int>> dp(nums.size()+1,vector<int>(2,0));
    int ans=-1;
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<i;j++){
            if(nums[i] < nums[j]){
                dp[i][1] = max(dp[i][1],dp[j][0]+1);
            }
            if(nums[i] > nums[j]){
                dp[i][0] = max(dp[i][0],dp[j][1]+1);
            }
        }
        ans = max({ans,dp[i][1],dp[i][0]});
    }
    return ans+1;
}

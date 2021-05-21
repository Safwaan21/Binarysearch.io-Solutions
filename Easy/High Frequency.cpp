int solve(vector<int>& nums) {
    int ans=0;
    unordered_map<int,int> mp;
    for(auto& u : nums){
        mp[u]++;
        ans = max(ans,mp[u]);
    } 

    return ans;
}

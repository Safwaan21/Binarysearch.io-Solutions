int solve(vector<int>& nums) {
    unordered_map<int,int> mp;
    int res=0;
    for(auto&u:nums){
        res+=mp[u];
        mp[u]++;
    }
    return res;
}

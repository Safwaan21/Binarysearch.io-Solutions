int solve(vector<vector<int>>& stacks) {
    int ans=0;
    unordered_map<int,int> an;
    for(auto&u:stacks){
        int cur=0;
        for(auto&k:u){
            cur+=k;
            an[cur]++;
        }
    }
    for(auto&u:an) if(u.second==stacks.size())ans=max(ans,u.first);
    return ans;
}

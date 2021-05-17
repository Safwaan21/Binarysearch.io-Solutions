int solve(vector<int>& nums) {
    int m=0,mi=1e9;
    for(auto& u:nums) {m=max(m,u);mi=min(mi,u);}
    return m-mi;
}

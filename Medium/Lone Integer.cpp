int solve(vector<int>& nums) {
    vector<int> b(32);
    int ans=0;
    for(auto u : nums){
        int j=0;
        while((1<<j) <=u){
            if((1<<j)&u) b[j]++;
            j++;
        }
    }
    for(int i=0;i<32;i++) if(b[i]%3) ans+=(1<<i);
    return ans;
}

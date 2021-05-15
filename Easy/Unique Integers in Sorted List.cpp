int solve(vector<int>& nums) {
    int ans=0;
    // binary search the next greater number - do this until nums.end()
    auto itr = nums.begin();
    while(itr!=nums.end()){
        itr = upper_bound(nums.begin(),nums.end(),*itr);
        ans++;
    }
    return ans;
}

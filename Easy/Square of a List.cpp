vector<int> solve(vector<int>& nums) {
    for(auto& u :nums)u*=u;
    sort(nums.begin(),nums.end());
    return nums;
}

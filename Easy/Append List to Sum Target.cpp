int solve(vector<int>& nums, int k, int target) {
    return ceil((abs(accumulate(nums.begin(),nums.end(),0.0)-target)/k));
}

int solve(vector<int>& nums) {
    int l = 0, r = accumulate(nums.begin(), nums.end(), 0);
    for (int i = 0; i < nums.size(); i++) {
        if (l == (r - nums[i] - l)) return i;
        l += nums[i];
    }
    return -1;
}

vector<int> solve(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i += 4) {
        if (i + 2 < nums.size()) swap(nums[i], nums[i + 2]);
    }
    for (int i = 1; i < nums.size(); i += 4) {
        if (i + 2 < nums.size()) swap(nums[i], nums[i + 2]);
    }
    return nums;
}

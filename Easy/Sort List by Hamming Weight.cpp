bool comp(int a, int b) {
    if (__builtin_popcount(a) == __builtin_popcount(b)) return a < b;
    return __builtin_popcount(a) < __builtin_popcount(b);
}

vector<int> solve(vector<int>& nums) {
    sort(nums.begin(), nums.end(), comp);
    return nums;
}

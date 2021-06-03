int solve(string s) {
    int ans = 0;
    int cur = 0;
    for (auto& u : s) {
        cur = (u == '1') ? ++cur : 0;
        ans += cur;
    }
    return ans;
}

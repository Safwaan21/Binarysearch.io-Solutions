vector<int> solve(vector<vector<int>>& intervals) {
    vector<int> ans{intervals[0][0],intervals[0][1]};
    for(auto& u : intervals){
        ans[0] = max(ans[0],u[0]);
        ans[1] = min(ans[1],u[1]);
    }
    return ans;
}

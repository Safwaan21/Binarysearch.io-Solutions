vector<vector<int>> solve(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<vector<int>> ans(n);
    for(int i=0;i<n;i++){
        for(auto u : graph[i]){
            ans[u].push_back(i);
        }
    }
    for(int i=0;i<n;i++) sort(ans[i].begin(),ans[i].end());
    return ans;
}

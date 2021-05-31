vector<int> dp;

int longest_path(vector<vector<int>>& graph, int i){
    if(dp[i]) return dp[i];
    int res=0;
    for(auto u : graph[i]) res = max(res, longest_path(graph,u)+1);
    return dp[i]=res;
}

int solve(vector<vector<int>>& graph) {
    int ans=0; dp.clear();dp.resize(1000);
    for(int i=0;i<graph.size();i++) ans = max(ans,longest_path(graph,i));
    return ans;
}

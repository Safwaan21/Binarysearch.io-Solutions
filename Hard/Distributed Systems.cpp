int solve(int n, vector<vector<int>>& edges) {
    vector<int> d(n+1,1e9);
    d[0]=0;
    int ans=0;
    vector<pair<int,int>> adj[n+1];
    for(auto u: edges){
        adj[u[0]].push_back({u[1],u[2]});
        adj[u[1]].push_back({u[0],u[2]});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,0});
    while(!pq.empty()){
        auto u = pq.top();pq.pop();
        for(auto k : adj[u.second]){
            if(d[u.second] + k.second < d[k.first]){
                d[k.first] = d[u.second] + k.second;
                pq.push({d[k.first],k.first}); 
            }
        }
    }
    for(auto u:d){
        ans=max(ans,u);
    }
    return ans;
}

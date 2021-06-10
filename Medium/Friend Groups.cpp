vector<int> v;

void dfs(int i,vector<vector<int>>& friends){
    v[i]=true;
    for(auto u : friends[i]){
        if(!v[u]){
            dfs(u,friends);
        }
    }
}

int solve(vector<vector<int>>& friends) {
    int ans=0;
    v.clear();v.resize(friends.size());
    for(int i=0;i<friends.size();i++){
        if(!v[i]){
            ++ans;
            dfs(i,friends);
        }
    }
    return ans;
}

vector<int> p;
int find(int a){
    if(a==p[a]) return a;
    return p[a] = find(p[a]);
}

bool solve(vector<vector<int>>& edges) {
    p.clear();
    for(int i=0;i<=100001;i++){
        p.push_back(i);
    }
    for(auto u : edges){
        u[0] = find(u[0]);
        u[1] = find(u[1]);
        if(u[0]==u[1]) return false;
        p[u[0]] = u[1];
    }

    return true;
}

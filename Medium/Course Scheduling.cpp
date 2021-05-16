// Cycles in a DAG

vector<int> v;
bool ans;

void dfs(int u, vector<vector<int>>& courses){
    v[u]=1;
    for(auto k : courses[u]){
        if(!v[k]) dfs(k,courses);
        if(v[k]==1) ans = false;
    }
    v[u]=2;
}

bool solve(vector<vector<int>>& courses) {
    ans = true;
    v.clear();
    v.resize(courses.size()+1);
    for(int i=0;i<courses.size();i++){
        if(!v[i]) dfs(i,courses);
    }
    return ans;
}

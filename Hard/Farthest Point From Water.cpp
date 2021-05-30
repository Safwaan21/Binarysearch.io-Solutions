int dr[] = {0,0,-1,1};
int dc[] = {1,-1,0,0};

int solve(vector<vector<int>>& matrix) {
    // all nodes that are 0's can be treated as sources, visit adjacent lands
    int ans=-1,n=matrix.size(),m=matrix[0].size();
    vector<vector<int>> d(n,vector<int>(m,-1));
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!matrix[i][j]) {q.push({i,j});d[i][j]=0;}
        }
    }
    while(!q.empty()){
        auto u = q.front();q.pop();
        for(int i=0;i<4;i++){
            int r = u.first + dr[i],c=u.second+dc[i];
            if(r>=n || r<0 || c>=m || c<0) continue;
            if(d[r][c]==-1){
                d[r][c] = d[u.first][u.second] + 1;
                ans = max(ans,d[r][c]);
                q.push({r,c});
            }
        }        
    }

    return ans;
}

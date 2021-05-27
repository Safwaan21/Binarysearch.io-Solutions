bool solve(vector<vector<int>>& rooms) {
    bitset<251> bs;
    queue<int> q;
    q.push(0);
    bs[0]=true;
    while(!q.empty()){
        auto u = q.front();q.pop();
        for(auto k : rooms[u]){
            if(!bs[k]){
                bs[k]=true;
                q.push(k);
            }
        }
    }
    return (bs.count()!=rooms.size()) ? false:true;
}

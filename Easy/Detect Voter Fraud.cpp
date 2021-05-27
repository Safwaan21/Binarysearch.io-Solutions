bool solve(vector<vector<int>>& votes) {
    unordered_set<int> s;
    for(auto& u:votes){
        if(s.count(u[1])) return true;
        s.insert(u[1]);
    }

    return false;
}

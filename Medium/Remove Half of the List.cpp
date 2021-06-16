int solve(vector<int>& nums) {
    priority_queue<int> pq;
    unordered_map<int,int> freq;
    int n = nums.size(),ans=0,k=0;
    for(auto&u:nums){
        freq[u]++;
    }
    for(auto&u:freq){
        pq.push(u.second);
    }
    while(k*2 < n){
        ans++;
        k+=pq.top();
        pq.pop();
    }
    return ans;
}

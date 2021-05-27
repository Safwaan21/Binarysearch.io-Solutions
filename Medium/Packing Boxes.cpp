vector<vector<int>> solve(vector<int>& nums) {
    vector<vector<int>> ans;
    int ind=0;
    for(int i=0;i<nums.size();i++){
        ans.push_back({});
        while(nums[i]==nums[i+1] && i+1<nums.size()){
            ans[ind].push_back(nums[i]);
            ++i;
        }
        ans[ind].push_back(nums[i]);
        ind++;
    }
    return ans;
}

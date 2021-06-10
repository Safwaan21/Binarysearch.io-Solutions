vector<int> solve(vector<int>& nums) {
    vector<int> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i*2<nums.size();i++){
        ans.push_back(nums[nums.size()-i-1]);
        ans.push_back(nums[i]);
    }
    if(nums.size()&1) ans.pop_back();
    return ans;
}

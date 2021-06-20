int solve(vector<int>& nums) {
    int a1=0,a2=0;
    vector<int> n = nums;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        a1+=abs(n[i]-nums[i]);
        a2+=abs(n[nums.size()-1-i] - nums[i]);
    }
    return min(a1,a2);
}

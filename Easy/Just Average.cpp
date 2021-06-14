bool solve(vector<int>& nums, int k) {
    int n = accumulate(nums.begin(),nums.end(),0) - k*(nums.size()-1);
    for(int i=0;i<nums.size();i++){
        if(nums[i]==n) return true;
    }
    return false;
}

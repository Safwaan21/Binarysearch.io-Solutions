bool solve(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int diff = nums[0]-nums[1];
    for(int i=1;i<nums.size()-1;i++){
        if(nums[i] - nums[i+1] != diff) return false;
    } 
    return true;
}

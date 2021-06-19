bool solve(vector<int>& nums) {
    int s = nums[0] > nums[1];
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]) return false;
        if(s) if(nums[i] < nums[i+1]) return false;
        if(!s) if(nums[i] > nums[i+1]) return false;
    }
    return true;
}

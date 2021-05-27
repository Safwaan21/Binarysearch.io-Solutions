bool solve(vector<int>& nums) {
    bool seen=false;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1 && !seen){
            while(nums[i]==1)++i;
            seen=true;
        }
        if(seen && nums[i]==1)return false;
    }
    return true;
}

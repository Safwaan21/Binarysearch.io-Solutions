int solve(vector<int>& nums) {
    int s=0,mi=0;
    for(int i=0;i<nums.size();i++){
        s+=nums[i];
        if(s<=0) mi = min(s,mi);
    }
    return abs(mi)+1;
}

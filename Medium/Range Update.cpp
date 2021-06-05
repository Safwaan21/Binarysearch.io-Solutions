vector<int> solve(vector<int>& nums, vector<vector<int>>& operations) {
    vector<int> psa(nums.size()+1,0);
    for(auto&u:operations){
        psa[u[0]]+=u[2];
        psa[u[1]+1]-=u[2];
    }
    int s=0;
    for(int i=0;i<nums.size();i++){
        s+=psa[i];
        nums[i]+=s;
    }
    return nums;
}

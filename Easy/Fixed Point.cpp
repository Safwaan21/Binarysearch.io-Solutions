int solve(vector<int>& nums) {
    int ans=-1;
    int l=0,r=nums.size()-1;
    while(l<=r){
        int m = l + (r-l)/2;
        if(nums[m] < m){
            l = m+1;
        }
        else{
            if(nums[m]==m) ans=m;
            r=m-1;
        }
    }
    return ans;
}

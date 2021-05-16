int solve(int k, vector<int>& nums) {
    int ans=0,numD=0;
    unordered_map<int,int> mp;

    int i=0,j=0;
    while(i<=j && j<nums.size()){
        if(mp[nums[j]]==0) numD++;
        mp[nums[j]]++;
        while(numD>k){
            if(mp[nums[i]]==1)numD--;
            mp[nums[i]]--;
            i++;
        }
        ans = max(ans,j-i+1);
        j++;
    } 

    return ans;
}

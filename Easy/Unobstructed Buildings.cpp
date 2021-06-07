vector<int> solve(vector<int>& heights) {
    vector<int> ans;
    int mx=0;
    for(int i=heights.size()-1;i>=0;i--){
        if(heights[i]>mx){
            mx=heights[i];
            ans.push_back(i);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

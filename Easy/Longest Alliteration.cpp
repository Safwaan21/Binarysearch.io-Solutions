int solve(vector<string>& words) {
    if(!words.size()) return 0;
    int ans=1,cur=1;
    for(int i=0;i<words.size()-1;i++){
        cur = (words[i][0]==words[i+1][0]) ? cur+1 : 1;  
        ans = max(ans,cur);
    }
    return ans;
}

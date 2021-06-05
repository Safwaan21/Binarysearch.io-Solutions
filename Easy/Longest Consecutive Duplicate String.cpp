int solve(string s) {
    if(!s.size())return 0;
    int ans=0,cur=1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1])++cur;
        else cur=1;
        ans=max(ans,cur);
    }
    return s.size()==1 ? 1 : ans;
}

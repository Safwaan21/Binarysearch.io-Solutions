int solve(string s) {
    int cur=0,ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==')' && !cur) ans++;
        else if(s[i]=='(') cur++;
        else cur--;
    }
    return ans+cur;
}

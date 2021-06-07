int solve(string s) {
    bitset<26> a;
    for(int i=0;i<s.size();i++){
        if(a[s[i]-'a']) return i;
        a[s[i]-'a']=1;
    }
    return -1;
}

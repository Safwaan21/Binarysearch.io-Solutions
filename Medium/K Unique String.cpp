int solve(string s, int k) {
    vector<int> freq(26);
    int ans=0,uni=0;
    for(auto& u : s){
        if(!freq[u-'a'])uni++;
        freq[u-'a']++;
    }
    while(uni>k){
        pair<int,int> r = {1e9,0};
        for(int i=0;i<26;i++)if(freq[i]) if(freq[i] < r.first){r.first=freq[i];r.second=i;}
        uni--;ans+=freq[r.second];freq[r.second]=0;
    }
    return ans;
}

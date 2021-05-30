vector<int> solve(int n) {
    vector<int> ans;
    bitset<100001> bs;
    for(int i=2;i<=n;i++){
        if(!bs[i]){ ans.push_back(i);
            int j=i;
            while(j<=n){
                bs[j]=true;
                j+=i;
            }
        }
    }
    return ans;
}

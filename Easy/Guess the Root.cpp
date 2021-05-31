int solve(int n) {
    int64_t ans; 
    int64_t l = 0, r = n;
    while(l<=r){
        int64_t m = l + (r-l)/2;
        if(m*m <=n){
            ans = m;
            l = m+1;
        }
        else r = m-1;
    }
    return ans;
}

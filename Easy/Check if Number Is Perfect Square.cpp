bool solve(int n) {
    int l=0,r=65536;
    while(l<=r){
        int m = l + (r-l)/2;
        if(m*m==n) return true;
        if(m*m<n) l = m+1;
        else r = m-1;
    }
    return false;
}

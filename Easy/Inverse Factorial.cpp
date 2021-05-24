int solve(int a) {
    int ans=1;
    for(int i=1;ans<=a;i++){
        ans*=i;
        if(ans==a) return i;
    }
    return -1;
}

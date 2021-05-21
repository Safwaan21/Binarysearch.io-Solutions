int solve(vector<int>& prices, int k) {
    sort(prices.begin(),prices.end());
    int i=0;
    while(k >= prices[i] && i<prices.size()){
        k-=prices[i];
        ++i;
    }
    return i;
}

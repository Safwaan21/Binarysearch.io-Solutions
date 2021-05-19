int solve(int n) {
    while(n>=10){
        int n2 = 0;
        while(n){
            n2+=(n%10);
            n/=10;
        }
        n = n2;
    }
    return n;
}

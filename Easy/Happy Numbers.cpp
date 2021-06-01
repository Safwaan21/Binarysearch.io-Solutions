bool solve(int n) {
    unordered_set<int> s;
    while(n!=1){
        int ss=0;

        while(n){
            ss+=((n%10)*(n%10));
            n/=10;
        }
        if(s.count(ss)) return false;
        s.insert(ss);
        n=ss;
    }
    return true;
}

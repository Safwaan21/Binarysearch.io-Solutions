bool solve(vector<int>& nums) {
    int m1=0,m2=0;
    for(auto& u : nums) {
        if(u>=m1){m2=m1;m1=u;}
        else if(u>m2) m2 =u;
    }

    return (m1 > 2*m2);
}

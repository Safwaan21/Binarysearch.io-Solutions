bool solve(string s) {
    int cur=0;

    for(auto& u:s){
        if(u=='(')cur++;
        else cur--;
        if(cur<0) return false;
    }
    if(cur) return false;
    return true;
}

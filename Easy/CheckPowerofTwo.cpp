bool solve(int n) {
    return n && !(n & n-1);
}

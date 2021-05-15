int solve(string a, string b) {
    vector<int> aa(26),bb(26),aa2(26);
    int ans;
    for(auto& u:a) {aa[u-'a']++;aa2[u-'a']++;}
    for(auto& u:b) bb[u-'a']++;
    for(int i=0;i<26;i++) if(aa[i] < bb[i]) return -1;
    
    int i=0;
    while(i<a.size()){
        if(aa[a[i]-'a']-1 < bb[a[i]-'a'])break;
        aa[a[i]-'a']--;
        i++;
    }
    int j =a.size()-1;
    while(j>=i){
        if(aa[a[j]-'a']-1 < bb[a[j]-'a'])break;
        aa[a[j]-'a']--;
        j--;
    }
    ans = j-i+1;

    i=0,j=a.size()-1;
    while(j>=0){
        if(aa2[a[j]-'a']-1 < bb[a[j]-'a'])break;
        aa2[a[j]-'a']--;
        j--;
    }
    while(i<=j){
        if(aa2[a[i]-'a']-1 < bb[a[i]-'a'])break;
        aa2[a[i]-'a']--;
        i++;
    }
    ans=min(ans,j-i+1); 
    return ans;
}

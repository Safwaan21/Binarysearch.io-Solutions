int solve(vector<string>& ops) {
    stack<int> s;
    for(auto&u:ops){
        if(u=="POP"){
            if(!s.size()) return -1;
            s.pop();
        }
        else if(u=="DUP"){
            if(!s.size()) return -1;
            s.push(s.top());
        }
        else if(u=="+"){
            if(s.size()<2) return -1;
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a+b);
        }
        else if(u=="-"){
            if(s.size()<2) return -1;
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a-b);
        }
        else{
            s.push(stoi(u));
        }
    }
    return s.size() ? s.top() : -1;
}

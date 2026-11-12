class Solution {
public:

bool solve(string s, string p){
    if(p.length()== 0){
        return s.length()==0;
    }

    bool firstcheck = false;

    if(s.length() > 0 && (p[0] == s[ 0]  || p[0] == '.')){
        firstcheck = true;
    }

    if(p[1] == '*'){
        bool nottake = solve(s , p.substr(2));
        bool take = firstcheck && solve(s.substr(1) , p) ;

        return nottake || take ;
    }

    return firstcheck && solve(s.substr(1) , p.substr(1));
}
    bool isMatch(string s, string p) {
        return solve(s, p) ;
    }
};
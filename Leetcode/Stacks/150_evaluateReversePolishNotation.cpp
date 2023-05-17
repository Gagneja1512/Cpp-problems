class Solution {
    bool isOperator(string s){
        int n = s.size() ;
        char c = s[n-1] ;
        return true ? c == '*' or c == '+' or c == '-' or c == '/' : false ;
    }

public:
    int evalRPN(vector<string>& tokens) {
        stack<long long int> s;
        int ans = 0 ;
        int n = tokens.size() ;
        for(int i=0 ; i<n ; i++){
            if(isOperator(tokens[i])){
                int a = s.top() ;
                s.pop() ;
                int b = s.top() ;
                s.pop() ;

                int m = tokens[i].size() ;
                char c = tokens[i][m-1] ;

                if(c == '*'){
                    s.push((long long)a*b);
                }else if(c == '+'){
                    s.push((long long)a+b);
                }else if(c == '-'){
                    s.push((long long)b - a);
                }else if(c == '/'){
                    s.push(b/a) ;
                }
            }else{
                int t = stoi(tokens[i]) ;
                s.push(t) ;
            }
        }   

        return s.top() ;
    }
};
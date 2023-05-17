class Solution {
    void possible(vector<string> &s , int n , string str){
        if(str.size() == 2*n){
            s.push_back(str);
            return ;
        }

        str.push_back('(');
        possible(s , n , str);

        str.pop_back();

        str.push_back(')');
        possible(s , n , str);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> s ; //All strings ;
        
        string str = "";
        possible(s , n , str);
        vector<string> ans ;

        for(int j=0 ; j<s.size() ; j++){
            string res = s[j];
            stack<char> st ;
            bool flag = true;

            for(int i=0 ; i<s[j].size() ; i++){
                if(s[j][i] == '('){
                    st.push(s[j][i]);
                }else{
                    if(s[j][i] == ')') 
                        s[j][i] = '(' ;

                    if(st.size() == 0 || st.top() != s[j][i]){
                        flag = false;
                        break;
                    }else{
                        st.pop();
                    }
                }
            }

            if((st.size() == 0) && flag){
                ans.push_back(res);
            }
        }

        return ans ;
    }
};
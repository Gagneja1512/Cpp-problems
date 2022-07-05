class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n = s.size();
        int index = 0;
        string ans = "";
        
        if(n == 1)
            return s[0];
        
        int min_length = INT_MAX;
        for(int i=0 ; i<n ; i++)
        {
            if(min_length > s[i].size())
                min_length = s[i].size();
        }
        
        
        for(int i=0 ; i<min_length ; i++)
        {   
            bool flag = true ;
            for(int j=0 ; j<n-1 ; j++)
            {
                if(s[j][i] != s[j+1][i])
                {
                    flag = false;
                    break;
                }
            }
            
            if(flag)
                ans += s[0][i];
            else
                break;
        }
        
        return ans ;
    }
};
class Solution {
public:
    int findShortestSubArray(vector<int>& a) {
        int n = a.size() ;
        int mx_fre = INT_MIN ;

        map<int , pair<int , pair<int , int>>> m;
        for(int i=0 ; i<n ; i++){
            if(m.find(a[i]) == m.end()){
                m[a[i]].first++ ;
                m[a[i]].second.first = i ;
                m[a[i]].second.second = i;
            }else{
                m[a[i]].first++ ;
                m[a[i]].second.second = i;
            }
        }

        for(auto itr = m.begin() ; itr != m.end() ; itr++){
            mx_fre = max(mx_fre , itr->second.first) ;
        }

        cout<<mx_fre<<endl;

        int ans = INT_MAX ;
        for(auto itr = m.begin() ; itr != m.end() ; itr++){
            if(mx_fre == itr->second.first){
                ans = min(ans, itr->second.second.second - itr->second.second.first + 1);
            }
        }

        return ans ;
    }
};
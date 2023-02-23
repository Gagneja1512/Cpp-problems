class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int , int>> v;
        int n = profits.size() ;

        for(int i=0 ; i<n ; i++){
            v.push_back({capital[i] , profits[i]}) ;
        }   

        sort(v.begin() , v.end() , [](auto a , auto b) {
            if(a.first == b.first){
                return a.second > b.second ;
            }
            
            return a.first < b.first ;
        }) ;

        priority_queue<int> p;
        int projects = 0 ;
        int last = -1 ;
        int index = 0 ;
        while(projects < k){
            while(v[index].first <= w && index < n){
                p.push(v[index].second) ;
                index++ ;
            }

            last = w ;
            if(p.size() > 0){
                w += p.top() ;
                p.pop() ;
            }

            projects++ ;

            if(last == w){
                break;
            }
        }

        return w ;
    }
};
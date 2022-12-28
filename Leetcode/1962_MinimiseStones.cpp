class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
        int n = p.size() ;

        priority_queue<int> pq ;
        for(int i=0 ; i<n ; i++){
            pq.push(p[i]) ;
        }

        for(int i=0 ; i<k ; i++){
            int t = pq.top() ;
            pq.pop() ;

            t=(t+1)/2 ;
            pq.push(t) ;
        }

        int ans = 0;
        while(!pq.empty()){
            ans += pq.top() ;
            pq.pop() ;
        }

        return ans ;
    }

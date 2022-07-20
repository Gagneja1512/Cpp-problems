#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
typedef long long int ll;
#define f first
#define s second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define endl '\n'
#define vl vector<long long>

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
    	int n; cin>>n;

    	vector<string> v;
    	ll p = 1;
    	int cnt = 0;
    	while(cnt < 63)
    	{
    		v.pb(to_string(p));

    		p*=2 ;
    		cnt++ ;
    	}

    	string s = to_string(n);
    	int ans = INT_MAX;
    	int sz = s.size() ;

    	/*for(int i=0 ; i<v.size() ; i++)
    		cout<<v[i]<<endl;*/

    	for(int i=0 ; i<v.size() ; i++)
    	{
    		
    		int cnt = 0;
    		int k = 0 , j = 0;
    		while(k < s.size() and j < v[i].size())
    		{
    			if(s[k] == v[i][j])
    			{
    				cnt++ ;
    				k++ ; j++ ;
    			}

    			else
    			{
    				k++ ;
    			}
    		}

    		ans = min(ans , sz + v[i].size() - 2*cnt) ;    
    		/*if(ans > sz + v[i].size() - 2*cnt)
    		{
    			ans = sz + v[i].size() - 2*cnt ;
    			cout<<v[i]<<endl;
    		}*/
    	}

    	cout<<ans<<endl;
    }
    return 0;
}	
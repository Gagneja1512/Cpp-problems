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
    	ll n ; cin>>n;

    	vector<vl> a ;
    	for(int i=0 ; i<2 ; i++)
    	{	
    		vl x;
    		for(int j=0 ; j<n ; j++)
    		{
    			ll y; cin>>y;
    			x.pb(y);
    		}

    		a.pb(x);
    	}

    	ll score_0 = 0;
    	ll score_1 = 0;

    	for(int i=0 ; i<n-1 ; i++)
    		score_0 += a[1][i] ;

    	vl dp ;
    	dp.pb(score_0) ;
    	int last = n-2 ;
    	while(last >= 0)
    	{
    		score_0 -= a[1][last] ;
    		score_1 += a[0][last + 1];

    		dp.pb(max(score_0 , score_1)) ;

    		last-- ;

    	}

    	ll ans = INT_MAX ;

    	if(dp.size() == 0)
    	{
    		cout<<0<<endl;
    		continue ;
    	}

    	for(int i=0 ; i<dp.size() ; i++)
    	{	
    		//cout<<"  "<<dp[i]<<endl;
    		ans = min(ans , dp[i]) ;
    	}

    	cout<<ans<<endl;
    }
    return 0;
}
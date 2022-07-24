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
    	ll n; cin>>n;

    	vector<pair<ll , vl>> v(n);
    	for(int i=0 ; i<n ; i++)
    	{
    		ll k; cin>>k;

    		v[i].first = k;

    		for(int j=0 ; j<k; j++)
    		{
    			ll x; cin>>x;

    			v[i].second.pb(x);
    		}
    	}


    	vector<pair<ll ,ll>> mx(n) ;
    	for(int i=0 ; i<n ; i++)
    	{
    		ll x = INT_MIN ;
    		for(int j=0 ; j<v[i].first ; j++)
    		{
    			x = max(x , v[i].second[j] - j + 1); 
    		}

    		mx[i].first = x;
    		mx[i].second = i;
    	}

    	sort(mx.begin() , mx.end()) ;

    	/*for(int i=0 ; i<n ; i++)
    		cout<<mx[i].first<<" ";*/

    	//cout<<endl;


    	ll ans = INT_MIN ;
    	ll cnt = 0 ;
    	for(int i=0 ; i<n ; i++)
    	{
    		ans = max(ans , mx[i].first - cnt) ;

    		cnt += v[mx[i].second].first ;
    	}

    	cout<<ans<<endl;
    }
    return 0;
}
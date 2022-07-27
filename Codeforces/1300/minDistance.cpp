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
    	ll n,k; cin>>n>>k;

    	vl a(n);
    	for(int i=0 ; i<n ; i++)
    		cin>>a[i];

    	vl positive , negetive ;
    	for(int i=0 ; i<n ; i++)
    	{
    		if(a[i] < 0)
    			negetive.pb(a[i]);

    		else positive.pb(a[i]);	 
    	}

    	sort(positive.begin() , positive.end());
    	sort(negetive.begin() , negetive.end() , [](ll a , ll b){return a > b;});

    	ll pos = positive.size();
    	ll neg = negetive.size(); 	

		ll ans = 0 ;
    	for(int i=pos-1 ; i>=0 ; i-=k)
    	{
    		ans += 2*positive[i];
    	}

    	for(int i=neg-1 ; i>=0 ; i-=k)
    	{
    		ans += 2*abs(negetive[i]);
    	}

    	if(neg == 0)
    	{
    		ans -= positive[pos-1];
    	}

    	else if(pos == 0)
    	{
    		ans -= abs(negetive[neg-1]);
    	}

    	else
    	{
    		if(abs(negetive[neg-1]) >= positive[pos-1])
    		{
    			ans -= abs(negetive[neg-1]);
    		}
    		else
    			ans -= positive[pos-1];
    	}

    	cout<<ans<<endl;
    }
    return 0;
}
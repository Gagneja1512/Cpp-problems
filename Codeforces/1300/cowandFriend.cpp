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
    	ll n,x ; cin>>n>>x;

    	vl a(n);
    	for(int i=0 ; i<n ; i++) 
    		cin>>a[i];

    	ll ans = INT_MAX ;

    	for(int i=0 ; i<n ; i++)
    	{
    		if(x%a[i] == 0)
    		{
    			ans = min(ans , x/a[i]);
    		}
    		else
    		{
    			if(x < 2*a[i])
    			{
    				ans = min(ans , 2);
    			}
    			else
    			{
    				ll temp = (x - 2*a[i])/a[i] + 1;

    				ans = min(ans , temp + 2);
    			}
    		}
    	}

    	cout<<ans<<endl;
    }
    return 0;
}
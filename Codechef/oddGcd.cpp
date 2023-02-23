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

    	vl a(n);
    	for(int i=0 ; i<n ; i++) cin>>a[i];

    	ll gc = 0;
    	for(int i=0 ; i<n ; i++)
    	{
    		gc = __gcd(gc , a[i]);
    	}	

    	if(gc&1)
    		cout<<0<<endl;

    	else
    	{
    		ll mn = INT_MAX;

    		for(int i=0 ; i<n ; i++)
    		{
    			ll cnt = 0;
    			while(a[i]%2 == 0)
    			{
    				a[i]/=2 ;
    				cnt++ ;
    			}

    			mn = min(mn , cnt);
    		}

    		cout<<mn<<endl;
    	}
    }
    return 0;
}
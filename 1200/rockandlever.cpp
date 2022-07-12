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

    	sort(a.begin() , a.end());
    	map<int , int> m;
    	ll ans = 0;
    	ll cn = 1;
    	for(int i=0 ; i<n ; i++)
    	{
    		while(a[i] > 1)
    		{
    			a[i] >>=1;
    			cn++ ;
    		}

    		m[cn]++ ;

    		cn = 1;
    	}	

    	for(auto itr = m.begin() ; itr != m.end() ; itr++)
    	{
    		ll val = itr->second ;
    		ans += val*(val -1)/2;
    	}

    	cout<<ans<<endl;

    }
    return 0;
}
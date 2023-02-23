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

    	set<ll> s;
    	for(int i=1 ; i*i<=n ; i++)
    	{
    		if(n%i == 0)
    		{
    			s.insert(i);
    			s.insert(n/i);
    		}
    	}

    	ll ans = 1;
    	for(auto itr = s.begin() ; itr != s.end() ;itr++)
    	{
    		if(*itr <= k)
    			ans = *itr ;

    		else
    			break;
    	}

    	cout<<n/ans<<endl;
    }
    return 0;
}
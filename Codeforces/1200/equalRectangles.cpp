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

    	vl a(4*n);
    	for(int i=0 ; i<4*n ; i++) cin>>a[i];

    	map<ll ,ll> m;
    	bool ans = true;
    	for(int i=0 ; i<4*n ; i++)	
    	{
    		m[a[i]]++ ;
    	}

    	for(auto itr = m.begin() ; itr != m.end() ; itr++)
    	{
    		if(itr->second%2 == 1)
    			ans = false;
    	}

    	vl b;
    	for(auto itr = m.begin() ; itr != m.end() ; itr++)
    	{
    		for(int j=0 ; j<itr->second/2 ; j++)
    			b.pb(itr->first);
    	}

    	int s = b.size();
    	if(s < 2)
    	{
    		ans = false ;
    	}
    	else
    	{
    		int i=1 , j=s-2;
    		ll sz = b[0]*b[s-1]; 
    		while(i < j)
    		{
    			if(b[i]*b[j] != sz)
    			{
    				ans = false;
    				break;
    			}
    			else
    			{
    				i++ ;j-- ;
    			}
    		}
    	}
    	

    	if(ans) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;

    }
    return 0;
}
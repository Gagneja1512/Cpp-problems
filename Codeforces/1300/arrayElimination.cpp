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

    	for(int i=0 ; i<n ; i++)
    		cin>>a[i];

    	map<ll ,ll> m;
    	for(int i=0 ; i<n ; i++)
    	{
    		/*int pos = 0;
    		while(a[i] > 0)
    		{
    			int bit = (a[i]>>pos)&1 ;
    			if(bit)
    			{
    				m[pos]++ ;
    			}

    			pos++ ;
    		}*/

    		for(int j=0 ; j<31 ; j++)
    		{
    			ll b = (a[i]>>j)&1;

    			if(b)
    				m[j]++ ;
    		}
    	}

    	ll ans = 0;
    	for(auto itr = m.begin() ; itr != m.end() ; itr++)
    	{
    		ans = __gcd(ans , itr->second);
    	}

    	set<ll> s;
    	for(int i=1 ; i*i<=ans ; i++)
    	{
    		if(ans%i == 0)
    		{
    			s.insert(i);
    			s.insert(ans/i);
    		}
    	}

    	bool all = true ;
    	for(int i=0 ; i<n ; i++)
    	{
    		if(a[i] > 0)
    			all = false ;
    	}

    	if(all)
    	{
    		for(int i=0 ; i<n ; i++)
    		{
    			cout<<i+1<<" ";
    		}
    		cout<<endl;
    		continue ;
    	}

    	for(auto itr = s.begin() ; itr != s.end() ; itr++)
    		cout<<*itr<<" ";

    	cout<<endl;
    }
    return 0;
}
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
    	ll n,me; cin>>n>>me;

    	vl a(n);

    	for(int i=0 ; i<n ; i++)
    		cin>>a[i];

    	vl pos(me);
    	set<ll> s;
    	for(int i=0 ; i<me ; i++)
    	{
    		cin>>pos[i];
    		s.insert(pos[i]-1);
    	}

    	map<ll , pair<ll ,ll>> m;
    	for(int i=0 ; i<n ; i++)
    	{
    		m[a[i]].first = i ;
    	}

    	sort(a.begin() , a.end());
    	for(int i=0 ; i<n ; i++)
    	{
    		m[a[i]].second = i ;
    	}

    	bool ans = true ;
    	for(auto itr = m.begin() ; itr != m.end() ; itr++)
    	{
    		ll actual = itr->second.first ;
    		ll deserved = itr->second.second ;

    		if(actual == deserved)
    			continue ;

    		else if(actual > deserved)
    		{
    			for(int i = --actual ; i>=deserved ; i--)
    			{
    				if(s.find(i) == s.end())
    					ans = false ;
    			}
    		}

    		else if(actual < deserved)
    		{
    			for(int i=actual ; i<deserved ; i++)
    			{
    				if(s.find(i) == s.end())
    					ans = false ;
    			}
    		}
    	}

    	if(ans)
    		cout<<"YES"<<endl;

    	else 
    		cout<<"NO"<<endl;
    }
    return 0;
}
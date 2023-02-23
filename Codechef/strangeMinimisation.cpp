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

bool isprime(long long a)
	{
		for(long long i=2 ; i*i<=a ; i++)
		{
			if(a%i == 0)
				return false ;
		}

		return true ;
	}

set<ll> factor(ll n)
{	
	set<ll> s;
	for(ll i=2 ; i*i <= n ; i++)
	{
		if(n%i == 0)
		{
			s.insert(i);
			if(n/i != i)
			{
				s.insert(n/i);
			}
		}
	}

	return s;
}	\

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
    	ll n; cin>>n;

    	if(isprime(n))
    	{
    		cout<<n+1<<endl;
    		continue;
    	}
    	else
    	{
    		set<ll> s = factor(n);
    		ll add = *(--s.end());

    		cout<<n+add<<endl; 
    	}
    }
    return 0;
}
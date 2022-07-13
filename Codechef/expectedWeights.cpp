#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
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

long long binpow(long long a, long long b , ll p) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%p;
        a = (a * a)%p;
        b >>= 1;
    }
    return res%p;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
    	ll n;
    	cin>>n;

    	ll mod = 998244353;
    	if(n&1)
    	{	
    		ll m = (n+1)/2;
    		ll ans = (n*m)%mod;

    		ans = (ans*m)%mod;
    		cout<<ans<<endl;
    	}

    	else
    	{
    		ll m = n/2;

    		ll ans = ((n+1)*m)%mod;

    		ans = (ans*(n+1))%mod;

    		ll ene = binpow(2 , mod-2 , mod);
    		ans = (ans*ene)%mod ;

    		cout<<ans<<endl;
    	}
    }
    return 0;
}
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
    	ll n,w ;cin>>n>>w;

    	ll p = 1e9 + 7;
    	ll ans = binpow(10 , n-2 , p);

    	if(w < 0)
    	{
    		w = abs(w) ;
    		w-- ;
    	}

    	ans = (ans*(9-w))%p ;

    	if(w >= 10)
    	{
    		cout<<0<<endl;
    		continue ;
    	}

    	cout<<ans<<endl;
    }
    return 0;
}
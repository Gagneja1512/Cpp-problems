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

    	string s; cin>>s;

    	ll c0 = 0 , c1 = 0;
    	for(int i=0 ; i<n ; i++)
    	{
    		if(s[i] == '1')
    			c1++ ;

    		else
    			c0++ ;
    	}

    	if(k == 1)
    	{
    		cout<<abs(c0 - c1)<<endl;
    		continue ;
    	}

    	ll dif = abs(c0 - c1);

    	ll ans = dif/k;
    	if(dif%k != 0)
    		ans++ ;

    	cout<<ans<<endl;

    }
    return 0;
}
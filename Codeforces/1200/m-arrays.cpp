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
    	ll n,m; cin>>n>>m;

    	vl a(n);
    	for(int i=0 ; i<n ; i++) cin>>a[i];

    	bool div = false;
    	vl hash(100001 , 0);
    	for(int i=0 ; i<n ; i++)
    	{
    		if(a[i]%m == 0)
    			div = true;

    		else
    			hash[a[i]%m]++ ;
    	}	


    	ll ans = 1 ? div : 0;

    	for(int i=1 ; i<m ; i++)
    	{
    		ll fir = i;
    		ll tar = m-i;

    		//cout<< "   " <<hash[i]<<endl;
    		if(hash[i] == 0)
    			continue ;

    		if(abs(hash[i] - hash[tar]) > 1)
    		{
    			ans += 1 + (max(hash[i] , hash[tar]) - min(hash[i] , hash[tar]) - 1);
    			hash[i] = 0;
    			hash[tar] = 0;
    		}

    		else
    		{	
    			hash[i] = 0;
    			hash[tar] = 0;
    			ans += 1;
    		}
    	}

    	cout<<ans<<endl;
    }
    return 0;
}
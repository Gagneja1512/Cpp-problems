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
    	ll n , x , y ; cin>>n>>x>>y;

    	vl a(n);
    	for(int i=0 ; i<n ; i++)
    		cin>>a[i];

    	if(y >= x)
    	{
    		ll mx = *max_element(a.begin() , a.end());

    		ll ans = mx/y ;

    		if(mx%y != 0)
    			ans++ ;

    		cout<<ans<<endl;
    	}
    	else
    	{
    		ll ans = 0;
    		//ll cntx = 0 , cnty = 0;
    		int i = n-1 ;
    		while(i >= 0)
    		{	
    			a[i] -= ans*y ;

    			if(a[i] <= 0)
    			{	
    				i-- ;
    				continue ;
    			}
	
    			//cout<<"  "<<a[i]<<" ";

    			ans += a[i]/x ;
    			if(a[i]%x != 0)
    				ans++ ;

    			//cout<<ans<<endl;

    			i-- ;
    		}

    		cout<<ans<<endl;
    	}

    	
    }
    return 0;
}	
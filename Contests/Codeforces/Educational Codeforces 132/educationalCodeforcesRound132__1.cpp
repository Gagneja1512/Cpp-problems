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
    	ll x; cin>>x;

    	vl a(3);
    	for(int i=0 ; i<3 ; i++)
    		cin>>a[i];

    	bool flag = true ;
    	if(a[x-1] == 0)
    		flag = false ;

    	else
    	{
    		ll te = a[x-1] ;

    		if(a[te-1] == 0)
    		{
    			flag = false;
    		}
    	}

    	if(flag) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }
    return 0;
}
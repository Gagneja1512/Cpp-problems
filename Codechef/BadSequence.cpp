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

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n; cin>>n;
    string s; cin>>s;

    if(n&1)
    	cout<<"NO"<<endl;

    else
    {
    	ll mn = INT_MAX;
    	ll ans = 0 ;
    	for(int i=0 ; i<n ; i++)
    	{
    		if(s[i] == '(')
    			ans += 1;

    		else 
    			ans -= 1;

    		mn = min(ans , mn);
    	}

    	if(ans != 0)
    		cout<<"NO"<<endl;

    	else if(mn < -1)
    		cout<<"NO"<<endl;

    	else
    		cout<<"YES"<<endl;
    }

    return 0;
}
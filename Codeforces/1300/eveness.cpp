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

    ll n; cin>>n;
    vl a(n);

    ll odd = 0 , even = 0;
    for(int i=0 ; i<n ; i++)
    {
    	cin>>a[i];

    	if(a[i]&1)
    		odd++ ;

    	else
    		even++ ;
    }

    if(odd == 1)
    {
    	for(int i=0 ; i<n ; i++)
    	{
    		if(a[i]&1)
    		{
    			cout<<i+1<<endl;
    			return 0;
    		}
    	}
    }
    
    if(even == 1)
    {
    	for(int i=0 ; i<n ; i++)
    	{
    		if(a[i]%2 == 0)
    		{
    			cout<<i+1<<endl;
    			return 0;
    		}
    	}
    }

    return 0;
}
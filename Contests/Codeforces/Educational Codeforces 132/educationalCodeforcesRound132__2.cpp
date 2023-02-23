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
  
    	ll n,m; cin>>n>>m;

    	vl a(n);
    	for(int i=0 ; i<n ; i++)
    	{
    		cin>>a[i];
    	}

    	vl pre(n) , suf(n);

    	ll sum = 0;
    	pre[0] = sum ;
    	for(int i=1 ; i<n ; i++)
    	{
    		if(a[i-1] > a[i])
    		{
    			pre[i] = pre[i-1] + a[i-1] - a[i];
    		}
    		else
    			pre[i] = pre[i-1];
    	}

    	suf[n-1] = sum;
    	for(int i=n-2 ; i>=0 ; i--)
    	{
    		if(a[i] < a[i+1])
    		{
    			suf[i] = suf[i+1] + a[i] - a[i+1];
    		}
    		else
    			suf[i] = suf[i+1] ;
    	}

    	while(m--)
    	{
    		ll x,y; cin>>x>>y;

    		if(x <= y)
    		{
    			cout<<pre[y-1] - pre[x-1]<<endl;
    		}
    		else
    			cout<<suf[x-1] - suf[y-1]<<endl;
    	}
    
    return 0;
}
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
    	ll n; cin>>n;

    	vl a(n);
    	for(int i=0 ; i<n ; i++) cin>>a[i];

    	bool one = false , zero = false , allsame = true ;
    	
    	for(int i=0 ; i<n-1 ; i++)
    	{
   			if(a[i] != a[i+1])
   				allsame = false;
    	}	

    	if(allsame)
    	{
    		cout<<"YES"<<endl;
    		continue ;
    	}

    	for(int i=0 ; i<n ; i++)
    	{
    		if(a[i] == 0)
    			zero = true;

    		if(a[i] == 1)
    			one = true;
    	}

    	if(one and zero)
    	{
    		cout<<"NO"<<endl;
    		continue;
    	}

    	if (zero)
    	{
    		cout<<"YES"<<endl;
    		continue ;
    	}

    	if(one)
    	{
    		sort(a.begin() , a.end());
    		bool ans = true;
    		for(int i=0 ; i<n-1 ; i++)
    		{
    			if(a[i] +1 == a[i+1])
    				ans = false ;
    		}

    		if(ans)
    			cout<<"YES"<<endl;

    		else
    			cout<<"NO"<<endl;

    		continue ;
    	}

    	else
    	{
    		cout<<"YES"<<endl;
    		continue ;
    	}
    }
    return 0;
}	
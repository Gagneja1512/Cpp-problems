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

    	vl b(2*n);
    	for(int i=0 ; i<2*n ; i++)
    		cin>>b[i];

    	sort(b.begin() , b.end());

    	vl a;
    	set<ll> s;
    	for(int i=0 ; i<2*n ; i++) 
    	{
    		if(s.find(b[i]) == s.end())
    		{
    			s.insert(b[i]);
    			a.pb(b[i]);
    		}
    	}

    	int mid = (n-1)/2;
    	vl te;
    	for(int i=0 ; i<mid ; i++)
    	{
    		te.pb(a[i]);
    		te.pb(a[i]);
    	}


    	te.pb(a[mid]); te.pb(a[mid]) ; te.pb(a[mid]);
    	for(int i=mid+1 ; i<n-1 ; i++)
    	{
    		te.pb(a[i]);
    		te.pb(a[i]);
    	}

    	te.pb(a[n-1]);

    	/*for(int i=0 ; i<n ; i++)
    		cout<<a[i]<<" ";

    	cout<<endl;

    	for(int i=0 ; i<2*n ; i++)
    		cout<<b[i]<<" ";

    	cout<<endl;

    	for(int i=0 ; i<2*n ; i++)
    		cout<<te[i]<<" ";

    	cout<<endl;*/

    	bool flag = true;
    	for(int i=0 ; i<2*n ; i++)
    	{
    		if(te[i] != b[i])
    			flag = false;
    	}

    	if(flag)
    	{
    		for(int i=0 ; i<n ; i++)
    			cout<<a[i]<<" ";

    		cout<<endl;

    	}
    	else
    		cout<<-1<<endl;

    }
    return 0;
}
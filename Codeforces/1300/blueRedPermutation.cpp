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
    	ll n; cin>>n ;

    	vl a(n);
    	for(int i=0 ; i<n ; i++) cin>>a[i];

    	string s; cin>>s;	

    	vector<pair<ll , char>> v(n);
    	for(int i=0 ; i<n ; i++)
    	{
    		v[i].first = a[i] ; v[i].second = s[i];
    	}

    	sort(v.begin() , v.end());
    	bool ans = true;
    	int index = n-1 ;
    	int last = n;
    	while(index >= 0)
    	{
    		if(v[index].second == 'R')
    		{
    			if(v[index].first > last)
    				ans = false ;

    			last-- ;
    		}

    		index-- ;
    	}

    	index = 0;
    	int start = 1 ;
    	while(index < n)
    	{
    		if(v[index].second == 'B')
    		{
    			if(v[index].first < start)
    				ans = false ;

    			start++ ;
    		}

    		index++ ;
    	}

    	if(ans) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }
    return 0;
}
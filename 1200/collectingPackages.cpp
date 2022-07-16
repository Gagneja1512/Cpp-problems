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

//sorting in pair in sort function is as
/*
	
	a.first < b.first ;
	if(a.f == b.f)
		b.s > a.s;

*/

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
    	ll n ; cin>>n;

    	vector<pair<ll , ll>> v(n);
    	for(int i=0 ; i<n ; i++)
    		cin>>v[i].first>>v[i].second;


    	sort(v.begin() , v.end()) ;

    	//for(int i=0 ; i<n ; i++)
    	//{
    	//	cout<<v[i].first<<" "<<v[i].second<<endl;
    	//}

    	bool flag = false ;
    	for(int i=0 ; i<n-1 ; i++)
    	{
    		if(v[i].second > v[i+1].second)
    		{
    			cout<<"NO"<<endl;
    			flag = true;
    			break ;
    		}
    	}

    	if(flag)
 			continue;


    	ll x = 0, y = 0;
    	string ans ;
    	for(int i=0 ; i<n ; i++)
    	{
    		ll abs = v[i].first;
    		for(int j=x ; j<abs ; j++)
    			ans.pb('R');

    		x = abs ;

    		ll ord = v[i].second ;
    		for(int j=y ; j<ord ; j++)
    			ans.pb('U');

    		y = ord ;

    	} 
    	cout<<"YES"<<endl;
    	cout<<ans<<endl;
    }
    return 0;
}
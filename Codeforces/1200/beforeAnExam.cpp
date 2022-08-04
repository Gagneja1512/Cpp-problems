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
 
    	ll d , sum; cin>>d>>sum ;

    	ll mn = 0 , mx = 0;

    	vector<pair<ll ,ll>> v(d) ;
    	for(int i=0 ; i<d ; i++)
    	{
    		cin>>v[i].f>>v[i].s;

    		mn += v[i].f ;
    		mx += v[i].s ;
    	}

    	if(mn > sum or mx < sum)
    	{
    		cout<<"NO"<<endl;
    		return 0;
    	}
    	//sort(v.begin() , v.end() , [](pair<ll , ll> a , pair<ll , ll> b){ return abs(a.f - a.s) > abs(b.f - b.s) ; });

    	ll diff = sum - mn ;
    	for(int i=0 ; i<d ; i++)
    	{
    		ll res = v[i].s - v[i].f ;

    		//cout<<"   "<<diff<<"    "<<res<<endl;

    		if(res <= diff)
    		{
    			v[i].f += res ;
    			diff -= res ;
    		}
    		else
    		{	
    			v[i].f += diff ;
    			diff = 0;		
    		}

    		if(diff == 0)
    		{
    			break;
    		}
    	}

    	cout<<"YES"<<endl;
    	for(int i=0 ; i<d ; i++)
    		cout<<v[i].f<<" ";

    	cout<<endl;

    
    return 0;
}
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
    	ll n,k; cin>>n>>k;

    	vl a(n);
    	for(int i=0 ; i<n ; i++)
    		cin>>a[i];

    	map<ll , ll> m;
    	for(int i=0 ; i<n ; i++)
    		m[a[i]]++ ;

    	vector<pair<ll ,ll>> v(m.size());
    	int q = 0;
    	for(auto itr = m.begin() ; itr != m.end() ; itr++)
    	{
    		v[q].first = itr->first ;
    		v[q].second = itr->second ;

    		q++ ;
    	}

    	//for(int i=0 ; i<m.size() ; i++)
    	//	cout<<v[i].first<<"        "<<v[i].second<<endl;

    	int i=0 , j=i;
    	ll ans = 0 ;
    	ll end = 0;
    	ll cnt = 0;

    	while(i < v.size() and j < v.size())
    	{
    		if(cnt == 0 and v[j].second >= k)
    		{	
    			cnt++ ;
    			j++ ;

    			if(cnt > ans)
    			{	
    				ans = cnt ;
    				end = v[j-1].first ;
    			}

    			i = j ;

    			//cout<<"FIR"<<endl;
    		}

    		else if(v[j].second>=k and (v[j].first == v[j-1].first + 1))
    		{	
    			cnt++ ;
    			j++ ;

    			if(cnt > ans)
    			{	
    				ans = cnt ;
    				end = v[j-1].first ;
    			}

    			i = j ;

    			//cout<<"SEC"<<endl;
    		}

    		else if(v[j].second < k)
    		{	
    			if(cnt > ans)
    			{	
    				ans = cnt ;
    				end = v[j-1].first ;
    			}

    			j++ ;
    			i = j ;

    			cnt = 0;

    			//cout<<"THR"<<endl;
    		}

    		else
    		{
    			if(cnt > ans)
    			{	
    				ans = cnt ;
    				end = v[j-1].first ;
    			}

    			i = j ;
    			cnt = 0;

    			//cout<<"FOR"<<endl;
    		}

    	}

    	if(ans == 0)
    		cout<<-1<<endl;


    	else
    	{
    		auto itr = m.find(end);

    		auto it = itr ;
    		while(ans > 1)
    		{
    			it-- ;
    			ans-- ;
    		}

    		cout<<it->first<<"  "<<itr->first<<endl;
    	}

    	
    }
    return 0;
}
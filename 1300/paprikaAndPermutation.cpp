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
    	multiset<ll> s;
    	for(int i=0 ; i<n ; i++)
    	{
    		cin>>a[i];
    		s.insert(a[i]);
    	}

    	vl required ;
    	for(int i=1 ; i<=n ; i++)
    	{
    		if(s.find(i) == s.end())
    			required.pb(i);

            else
            {   
                auto itr = s.find(i);
                s.erase(itr) ;
            }
    	}

    	sort(a.begin() , a.end()) ;
    	ll add = n - required.size() ;

    	//cout<<"    "<<add<<endl;

    	//for(int i=0 ; i<required.size() ; i++)
    	//	cout<<required[i]<<" ";

    	//cout<<endl;

    	bool ans = true ;
    	ll cnt = 0;
        int index = 0;
    	for(auto itr = s.begin() ; itr != s.end() ; itr++)
    	{	
    		ll x = *itr ;
    		ll rem ;

    		if(x&1)
    			rem = x/2;
    		else
    			rem = x/2 - 1;

    		//cout<<required[i]<<"     "<<rem<<endl;

    		if(required[index] > rem)
    		{
    			ans = false ;
    		}
    		else
    			cnt++ ;

            index++ ;
    	}

    	if(ans)
    		cout<<cnt<<endl;

    	else
    		cout<<-1<<endl;
    }
    return 0;
}
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
    	ll x , y; cin>>x>>y;

    	ll l2 , r2 ;
    	for(long long i=1 ; i*i <= y ; i++)
    	{
    		if(y%i == 0)
    		{
    			l2 = i ;
    			r2 = y/i;
    		}
    	}

    	ll l1 , r1 ;
    	if(!(x&1))
    	{
    		l1 = x/2 , r1 = x/2 ;
    	}
    	else
    	{
    		l1 = x/2 , r1 = x/2 + 1; 
    	}

    	bool flag = false ;
    	if(r2 < l1)
    		flag = false ;

    	else if(l2 > r1)
    		flag = false;

    	else flag = true ;
    	
    	if(flag)
    		cout<<-1<<endl;
    	else
    	{
    		cout<<l1<<" "<<r1<<endl;
    		cout<<l2<<" "<<r2<<endl;
    	}
    }
    return 0;
}
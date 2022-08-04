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
    	ll n,x ; cin>>n>>x ;

    	if(x < n)
    	{
    		cout<<-1<<endl;
    		continue ;
    	}

    	ll r = x - n + 1;
    	cout<<r<<" ";
    	for(int i =1;i<=n ; i++)
    	{
    		if(i == r)
    			continue ;

    		else
    			cout<<i<<" ";
    	}

    	cout<<endl;
    }
    return 0;
}
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

    	sort(a.begin() , a.end()  , [](ll a , ll b){return a>b ;});

    	vl hehe(2*k+1);
    	for(int i=0 ; i<2*k+1 ; i++)
    		hehe[i] = a[i];

    	ll odd = 0, even = 0;
    	for(int i=0 ; i<hehe.size() ; i++)
    	{
    		if(i&1)
    			even += hehe[i];

    		else
    			odd += hehe[i];
    	}

    	odd -= hehe[2*k];
    	even += hehe[2*k];

    	cout<<max(odd , even)<<endl;
    }
    return 0;
}
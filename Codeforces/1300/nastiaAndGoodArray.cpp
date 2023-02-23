#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
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

    	ll mod = 1e9+7;

    	cout<<n/2<<endl;
    	for(int i=0 ; i<n-1 ; i+=2)
    	{
    		cout<<i+1<<" "<<i+2<<" "<<min(a[i] , a[i+1])<<" "<<mod<<endl;
    	}		

    	cout<<endl;
    }
    return 0;
}
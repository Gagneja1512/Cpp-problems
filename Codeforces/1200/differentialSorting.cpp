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
    	for(int i=0 ; i<n ; i++)
    		cin>>a[i];

    	bool flag = is_sorted(a.begin() , a.end());
    	if(flag)
    		cout<<0<<endl;

    	else
    	{
    		if(a[n-1] < a[n-2])
    			cout<<-1<<endl;

    		else if(a[n-1] < 0 and a[n-2] < 0)
    			cout<<-1<<endl;

    		else
    		{
    			cout<<n-2<<endl;
    			for(int i=0 ; i<n-2 ; i++)
    				cout<<i+1<<" "<<n-1<<" "<<n<<endl;

    			
    		}
    	}
    }
    return 0;
}
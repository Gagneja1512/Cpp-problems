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

    	vector<int> a(n);
    	for(int i=0 ; i<n ; i++)
    		cin>>a[i];

    	vector<int> res(n+1 , 0);
    	map<int , int> m;
    	for(int i=0 ; i<n ; i++)
    	{
    		if(res[a[i]] == 0)
    		{
    			res[a[i]]++ ;
    			m[a[i]] = i ;
    		}
    		else
    		{
    			int cur = i;
    			int last = m[a[i]];

    			//cout<<a[i]<<" "<<last<<" "<<cur<<endl;

    			if((cur-last)%2 ==1)
    			{
    				res[a[i]]++ ;
    				m[a[i]] = cur;
    			}
    		}
    	}

    	for(int i=1 ; i<=n ; i++)
    		cout<<res[i]<<" ";

    	cout<<endl;
    }
    return 0;
}
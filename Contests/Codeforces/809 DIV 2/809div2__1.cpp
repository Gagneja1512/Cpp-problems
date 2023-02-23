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
    	int n,m; cin>>n>>m;

    	vector<int> a(n);
    	for(int i=0 ; i<n ; i++)
    		cin>>a[i];

    	string s;
    	for(int i=0 ; i<m ; i++)
    		s.pb('B');

    	for(int i=0 ; i<n ; i++)
    	{
    		int pos = a[i]-1 ;

    		int last_pos = m - pos - 1;

    		int mn = min(pos , last_pos);

    		if(s[mn] == 'A')
    		{
    			int mx = max(pos , last_pos);
    			s[mx] = 'A' ;
    		}
    		else
    		{
    			s[mn] = 'A';
    		}
    	}

    	cout<<s<<endl;
    }
    return 0;
}
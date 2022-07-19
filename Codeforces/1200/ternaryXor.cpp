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

    	string s;cin>>s;

    	string one , two ;
    	bool temp = false;

    	for(int i=0 ; i<n ; i++)
    	{
    		if(temp)
    		{
    			one.pb('0') ;  two.pb(s[i]);
    		}

    		else if(s[i] == '2' and temp == false)
    		{
    			one.pb('1'); two.pb('1');
    		}

    		else if(s[i] == '0')
    		{
    			one.pb('0'); two.pb('0');
    		}

    		else if(s[i] == '1')
    		{
    			temp = true;
    			one.pb(s[i]) ; two.pb('0');
    		}
    	}

    	cout<<one<<endl;
    	cout<<two<<endl;
    }
    return 0;
}
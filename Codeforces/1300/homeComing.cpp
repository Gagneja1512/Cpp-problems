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
    	ll a,b,p; cin>>a>>b>>p;

    	string s; cin>>s;

    	int n = s.size();
    	vl dp(n);
    	dp[n-1] = 0;
    	if(s[n-2] == 'A')
    		dp[n-2] = a;

    	else
    		dp[n-2] = b;

    	for(int i=n-3 ; i>=0 ; i--)
    	{
    		if(s[i] == s[i+1])
    			dp[i] = dp[i+1];

    		else
    		{
    			if(s[i] == 'A')
    				dp[i] = dp[i+1] + a;

    			else
    				dp[i] = dp[i+1] + b;
    		}
    	}

    	/*for(int i=0 ; i<n ; i++)
    		cout<<dp[i]<<" ";

    	cout<<endl;*/

    	int ans ;
    	for(int i=n-1 ; i>=0 ; i--)
    	{
    		if(dp[i] <= p)
    			ans = i+1 ;
    	}

    	cout<<ans<<endl;
    }
    return 0;
}
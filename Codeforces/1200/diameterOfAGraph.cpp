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
    	ll n,m,k; cin>>n>>m>>k;

    	if(m > n*(n-1)/2 or m < n-1)
    	{
    		cout<<"NO"<<endl;
    		//cout<<"   FIR"<<endl;
    		continue;
    	} 

    	if(n == 1 or n == 2)
    	{
    		ll mn = n-1 ;

    		if(mn < k-1)
    			cout<<"YES"<<endl;

    		else
    			cout<<"NO"<<endl;

    		//cout<<"   SEC"<<endl;
    		continue;
    	}

    	if(m < n*(n-1)/2)
    	{
    		ll mn = 2;

    		if(mn < k-1)
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;

    		//cout<<"   TH"<<endl;
    		continue;
    	}

    	if(m == n*(n-1)/2)
    	{
    		if(1 < k-1)
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;

    		//cout<<"   FOR"<<endl;
    		continue;
    	}
    }
    return 0;
}
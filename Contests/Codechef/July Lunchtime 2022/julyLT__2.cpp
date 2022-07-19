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

    	string s; cin>>s;

    	vl even(26 , 0);
    	vl odd(26 , 0) ;

    	for(int i=0 ; i<n ; i+=2)
    	{
    		odd[s[i] - 'a']++ ;
    	}

    	for(int i=1 ; i<n ; i+=2)
    	{
    		even[s[i] - 'a']++ ;
    	}

    	bool ans = true; 

    	for(int i=0 ; i<26 ; i++)
    	{
    		if(odd[i] != even[i])
    			ans = false ;
    	}

    	if(ans)
    		cout<<"YES"<<endl;

    	else
    		cout<<"NO"<<endl;
    }
    return 0;
}
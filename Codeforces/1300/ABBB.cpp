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
    	string s; cin>>s;

    	ll n = s.size();
    	ll ca = 0 , cb = 0;
    	for(int i=0 ; i<n ; i++)
    	{
    		if(s[i] == 'A')
    			ca++ ;
    			
    		else
    		{
    			if(ca == 0 and cb == 0)
    				cb++ ;

    			else if(ca != 0 and cb == 0)
    				ca-- ;

    			else if(ca == 0 and cb != 0)
    				cb-- ;

    			else
    				ca-- ;
    		}			
    	}

    	cout<<ca+cb<<endl;
    }
    return 0;
}
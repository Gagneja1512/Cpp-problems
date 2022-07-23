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

    	vl b(n);
    	for(int i=0 ; i<n ; i++)
    		cin>>b[i];

    	bool ans = true;
        bool res = is_sorted(a.begin() , a.end());

        if(res)
        {
            cout<<"YES"<<endl;
            continue ;
        }

        bool z = true , o = true;
        for(int i=0 ; i<n ; i++)
        {
            if(b[i] == 1)
                z = false ;

            if(b[i] == 0)
                o = false ;
        }

        if(o or z)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
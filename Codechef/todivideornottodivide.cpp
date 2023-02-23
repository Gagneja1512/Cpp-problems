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
    	ll a,b,n; cin>>a>>b>>n;

    	if(a%b == 0)
    	{
    		cout<<-1<<endl;
    		continue ;
    	}

    	ll rem = n%a ;
    	if(rem != 0)
    		n += a - rem ;

    	if(n%b == 0)
    		n += a;

    	cout<<n<<endl;
    }
    return 0;
}
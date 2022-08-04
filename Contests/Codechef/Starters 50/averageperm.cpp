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
    	int n; cin>>n;

    	int sz = n;
    	vl a(n);
    	int i = 0 , j = n-1 ;
    	while(i <= j)
    	{
    		a[i] = n;
    		n-- ;

    		if(i == j)
    			break;

    		a[j] = n;
    		n-- ;

    		i++ ;
    		j-- ;
    	}

    	for(int k=0 ; k<sz ; k++)
    		cout<<a[k]<<" ";

    	cout<<endl;
    }
    return 0;
}
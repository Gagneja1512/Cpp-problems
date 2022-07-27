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

    	sort(a.begin() , a.end());
    	int start = 0 , end = n-1 ;

    	int index ;

    	while(start <= end)
    	{
    		int mid = (start + end)/2 ;

    		ll m = a[mid];
    		ll diff = 0;
    		for(int i=0 ; i<mid ; i++)
    			diff += m - a[i];

    		ll sum = 0;
    		for(int i=mid + 1 ; i<n ; i++)
    			sum+=a[i];

    		//cout<<diff<<" "<<sum<<endl;

    		if(diff == sum)
    		{
    			index = mid ;
    			break;
    		}

    		else if(diff > sum)
    		{
    			end = mid - 1;  
    		}

    		else
    		{
    			index = mid ;
    			start = mid + 1; 
    		}
    	}

    	//cout<<"   "<<index<<endl;

    	cout<<n-index-1<<endl;
    }
    return 0;
}
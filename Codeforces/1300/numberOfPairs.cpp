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

int binary_lower(vl &a , ll tar , int i)
{
	int start = i , end = a.size() - 1;
	int ans = -1;
	while(start <= end)
	{
		int mid = (start + end)/2 ;

		if(a[mid] > tar)
			end = mid - 1;

		else
		{
			start = mid + 1;
			ans = mid ;
		}
	}

	return ans ;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
    	ll n,l,r ; cin>>n>>l>>r;

    	vl a(n);
    	for(int i=0 ; i<n ; i++)
    		cin>>a[i];

    	sort(a.begin() , a.end()) ;

    	ll cnt_1 = 0 , cnt_2 = 0;
    	for(int i=0 ; i<n ; i++)
    	{	
    		ll tar = r - a[i];
    		if(binary_lower(a , tar , i) != -1)
    		{
    			cnt_1 += binary_lower(a , tar , i) - i;
    		}

    		ll tar2 = l-1-a[i];
    		if(binary_lower(a , tar2 , i) != -1)
    		{
    			cnt_2 += binary_lower(a , tar2 , i) - i;
    		}
    	}

   
    	//cout<<cnt_1<<" "<<cnt_2<<endl;
    	cout<<cnt_1 - cnt_2<<endl;
    }	
    return 0;
}
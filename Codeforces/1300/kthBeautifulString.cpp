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

int upper(vl &a , ll k)
{
	int start = 0;
	int end = (int)a.size() - 1;
	int index = -1;

	while(start <= end)
	{	
		int mid = (start + end) / 2 ;

		// cout << "Mid -> " << mid << endl;
		// if(a[mid] == k)
		// 	return mid;
		if(a[mid] >= k)
		{
			index = mid;
			// cout << index << endl;
			// cout << start << ' ' << end << endl;
			end = mid - 1;
		}
		else
		{	
			start = mid + 1;
		}

	}
	// cout << index << "YOYOYOYOYOYO" << endl;
	return index ;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vl v(100000);
    v[0] = 0;
    for(int i=1 ; i<v.size() ; i++)
    {	
    	v[i] = v[i-1] + i;
    }

    int T;
    cin >> T;
    while (T--) {
    	ll n ,k ; cin>>n>>k;

    	int index = upper(v , k);

    	// cout<<index<<endl;

    	ll extra = v[index] - k;

    	index = n - index - 1;
    	

    	// cout<<index<<endl;

    	string ans = "";

    	for(int i=0 ; i<n ; i++)
    	{
    		if(i == index)
    			ans.pb('b');
    		else if(i == index + extra+1)
    			ans.pb('b');

    		else
    			ans.pb('a');
    	}

    	cout<<ans<<endl;
    }
    return 0;
}
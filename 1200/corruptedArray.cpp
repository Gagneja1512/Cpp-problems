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

int binarySearch(vl a , ll k)
{
	int start = 0;
	int end = a.size()-1;

	while(start <= end)
	{
		int mid = (start + end)/2;

		if(a[mid] > k)
			end = mid - 1;

		else if(a[mid] < k)
			start = mid + 1;

		else
			return mid;
	}

	return 0;	
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
    	ll n; cin>>n;

    	vl a(n+2);
    	for(int i=0 ; i<n+2 ; i++) cin>>a[i];

    	sort(a.begin() , a.end());
    	ll sum = 0;
    	for(int i=0 ; i<n+1 ; i++)
    	{
    		sum+=a[i];
    	}
    	//cout<<"SUM : "<<sum<<endl;

    	bool flag = false;
    	int index ;
    	for(int i=0 ; i<n+1 ; i++)
    	{
    		ll tar = sum - a[i];
    		if(tar == a[i] or tar == a[n+1])
    		{	
    			flag = true ;
    			index = i;
    			break;
    		}
    	}

    	//cout<<index<<endl;
    	if(flag == false)
    		cout<<-1<<endl;

    	else
    	{
    		for(int i=0 ; i<n+1 ; i++)
    		{
    			if(i == index)
    				continue ;

    			else 
    				cout<<a[i]<<" ";
    		}

    		cout<<endl;
    	}

    	//cout<<endl;
    }
    return 0;
}	
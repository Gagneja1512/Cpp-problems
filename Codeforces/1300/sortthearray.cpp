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
    
    ll n; cin>>n;

    vl a(n) , b(n);
    for(int i=0 ; i<n ; i++)
    {
    	cin>>a[i];
    	b[i] = a[i];
    }

    sort(b.begin() , b.end());

    int start = 0 , end = n-1 ;
    for(int i=0 ; i<n ; i++)
    {	
    	if(a[i] != b[i])
    	{
    		start = i;
    		break;
    	}
    }

    for(int i=n-1 ; i>= 0 ; i--)
    {
    	if(a[i] != b[i])
    	{
    		end = i;
    		break;
    	}
    }

    bool ans = is_sorted(a.begin() , a.end());
    if(ans)
    {
    	cout<<"yes"<<endl;
    	cout<<1<<" "<<1<<endl;
    	return 0;
    }

    bool flag = true ;
   	int i = start  , j = end;
   	while(i <= end)
   	{
   		if(a[i] != b[j])
   		{
   			flag = false ;
   			 break;
   		}

   		else
   		{
   			i++ ;
   			j-- ;
   		}
   	}

   	if(flag)
    {
   		cout<<"yes"<<endl;
   		cout<<start+1<<" "<<end+1<<endl;
   	}
   	else
   		cout<<"no"<<endl;
    return 0;
}
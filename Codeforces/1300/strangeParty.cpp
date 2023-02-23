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
    	ll n, m ; cin>>n>>m;

    	vector<int> k(n);
    	for(int i=0 ; i<n ; i++)
    		cin>>k[i];

    	vector<int> s(m);
    	for(int i=0 ; i<m ; i++)
    		cin>>s[i];

    	ll sum = 0;	
    	int index = 1;
    	set<int> st;
    	sort(k.begin() , k.end() , [](int a , int b){return a>b ;});
    	
    	for(int i=0 ; i<n ; i++)
    	{
    		if(index < k[i])
    		{	
    			sum += s[index-1];
    			index++ ;
    		}

    		else
    			sum += s[k[i]-1] ;
    	}

    	cout<<sum<<endl;

    }
    return 0;
}
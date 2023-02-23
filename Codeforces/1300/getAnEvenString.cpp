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

    	int n = s.size();
    	int i=0 , j=0 ;

    	ll cnt = 0;
    	while(i<n and j<n)
    	{
    		if(s[i] ==  s[i+1])
    		{
    			i+=2; j+=2 ;
    		}

    		else
    		{	
    			set<char> st;
    			st.insert(s[i]);
    			i++ ;
    			while(i < n)
    			{		
    				if(st.find(s[i]) == st.end())
    				{
    					st.insert(s[i]);
    					i++ ;
    				}

    				else
    				{
    					cnt += i-j-1 ;
    					
    					st.erase(s[i]);
    					i++ ;
    					j = i;
    					break;
    				}
    			}

    			if(i == n)
    				cnt += i-j ;
    		}
    	}

    	cout<<cnt<<endl;
    }
    return 0;
}
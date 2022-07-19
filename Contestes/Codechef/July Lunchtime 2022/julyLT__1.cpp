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

bool vowel(char c)
{
	if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
		return true ;

	return false ;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
    	ll n; cin>>n;

    	string s;
    	cin>>s ;

    	if(n < 4)
    	{
    		cout<<"YES"<<endl;
    		continue ;
    	}

    	bool ans = true ;

    	for(int i=0 ; i<n-3 ; i++)
    	{
    		if(!vowel(s[i]) and !vowel(s[i+1]) and !vowel(s[i+2]) and !vowel(s[i+3]))
    			ans = false ;
    	}

    	if(ans)
    		cout<<"YES"<<endl;

    	else
    		cout<<"NO"<<endl;
    }
    return 0;
}
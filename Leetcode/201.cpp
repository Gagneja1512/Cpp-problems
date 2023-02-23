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

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll left , right ; cin>>left>>right ;

    int ans = 0;
    bool flag = true ;
        
    for(int i=30 ; i>=0 ; i--)
    {
        int l = left>>i&1;
        int r = right>>i&1;
            
        if((l == r) and flag)
        {	
        	//cout<<l<<"  "<<r<<"  "<<i<<endl;
           	ans += l<<i;
        }
        else
        {
            flag = false ;
        }
    }


    cout<<ans<<endl;   
    
    return 0;
}
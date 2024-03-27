#ifdef LOCAL
#define _GLIBCXX_DEBUG
#endif
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define sz(s) ((int)s.size())
#define all(v) begin(v), end(v)
 
typedef long double ld;
const int MOD = 1000000007;
#define ff first
#define ss second
 
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

int main() {
	int t ; cin>>t ;

	while(t--) {
		int n , k ;
		cin>>n>>k ;

		if(k>=32) k=31;

		cout<<min((ll)pow(2 , k) , (ll)n+1)<<endl; 
	}

	return 0 ;
}
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
	int t; cin>>t ;
	while(t--) {
		ll n ; cin>>n ;

		vector<int> arr(n) ;
		for(auto &x : arr) cin>>x ;

		ll mn = INT_MAX ;
		for(auto x : arr)
			mn = min(1ll*x , mn) ;

		if(mn == arr[0]) 
			cout<<"Bob"<<endl; 
		else
			cout<<"Alice"<<endl; 
	}

	return 0;
}
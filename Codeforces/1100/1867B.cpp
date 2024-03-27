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
		int n ; cin>>n ;
		string s ; cin>>s ;

		int same = 0 , diff = 0 ;
		int i = 0 , j = n-1 ;

		// Calculating how many same and diff characters are there in these halves
		while(i<j) {
			if(s[i] == s[j]) {
				same++ ;
			}else{
				diff++ ;
			}

			i++ ; j-- ;
		}

		string ans = "" ;
		for(int i=0 ; i<=n ; i++) ans.push_back('0') ;


		ans[diff] = '1' ;
		for(int i=0 ; i<same ; i++) {
			diff = diff + 2 ;
			ans[diff] = '1' ;
		}

		if(n&1) {
			int index = 0 ;
			while(index<n){
				if(ans[index] == '1') {
					ans[index + 1] = '1' ;
					index += 2 ;
				}else{
					index++ ;
				}
			}
		}

		cout<<ans<<endl; 
	}
}

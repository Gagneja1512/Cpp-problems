#include <bits/stdc++.h>
using namespace std ;

int main() {
	int t ;
	cin>>t ;

	while(t--) {
		string s ; cin>>s ;
		int n = s.size() ;
		int ans = 0 ;
		int res = 0 ;
		for(int i=0 ; i<n ; i++) {
			if(s[i] == 'L') {
				res++ ;
				ans = max(ans , res) ;
			}else{
				res = 0 ;
			}
		}

		cout<<ans + 1<<endl; 
	}

	return 0 ;
}
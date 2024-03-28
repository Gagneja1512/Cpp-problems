#include <bits/stdc++.h>
using namespace std ;

int main() {
	int t ; cin>>t ;

	while(t--) {
		int n ; cin>>n ;

		vector<int> v(n) ;
		for(auto &x : v) 
			cin>>x ;

		sort(v.begin() , v.end()) ;

		int mid = (n-1)>>1 ;

		vector<int> ans(n) ;
		ans[0] = v[mid] ;

		int front = mid + 1 , behind = mid - 1 , operations = 1 ;

		while(operations < n) {
			if(operations&1) {
				ans[operations] = v[front] ;
				front++ ;
			}else{	
				ans[operations] = v[behind] ;
				behind-- ;
			}

			operations++ ;
		}	

		for(auto &x : ans) 
			cout<<x<<' ';
		cout<<endl; 
		
	}

	return 0 ;
}
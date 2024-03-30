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
 
void solve() {
    int n; cin>>n ;

    string s , t ;
    cin>>s>>t ;

    int cnt = 0 , cntr = 0 ;
    for(int i=0 ; i<n ; i++) {
        if(s[i] != t[i]) cnt++ ;
    }

    for(int i=0 ; i<n ; i++) {
        if(s[i] != t[n-1-i]) cntr++ ;
    }

    int ans = min(2*cnt - cnt%2 , max(2 , 2*cntr - (1 - cntr%2))) ; 
    cout<<ans; 
    return ;

}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  bool test = true;
  int TET = 1;
  if (test)
    cin >> TET;
  cout << fixed << setprecision(6);
  for (int i = 1; i <= TET; i++) { 
    solve() ;
    cout << '\n';
  }

  return 0;
}
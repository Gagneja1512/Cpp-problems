/*
	
	Danik urgently needs rock and lever! Obviously, the easiest way to get these things is to ask Hermit Lizard for them.

Hermit Lizard agreed to give Danik the lever. But to get a stone, Danik needs to solve the following task.

You are given a positive integer n
, and an array a of positive integers. The task is to calculate the number of such pairs (i,j) that i<j and ai & aj≥ai⊕aj, where & denotes the bitwise AND operation, and ⊕

denotes the bitwise XOR operation.

Danik has solved this task. But can you solve it?
Input

Each test contains multiple test cases.

The first line contains one positive integer t
(1≤t≤10

) denoting the number of test cases. Description of the test cases follows.

The first line of each test case contains one positive integer n
(1≤n≤105

) — length of the array.

The second line contains n
positive integers ai (1≤ai≤109

) — elements of the array.

It is guaranteed that the sum of n
over all test cases does not exceed 105

.
Output

For every test case print one non-negative integer — the answer to the problem.
*/

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

    	ll n; cin>>n;

    	vl a(n);
    	for(int i=0 ; i<n ; i++) cin>>a[i];

    	sort(a.begin() , a.end());
    	map<int , int> m;
    	ll ans = 0;
    	ll cn = 1;
    	for(int i=0 ; i<n ; i++)
    	{
    		while(a[i] > 1)
    		{
    			a[i] >>=1;
    			cn++ ;
    		}

    		m[cn]++ ;

    		cn = 1;
    	}	

    	for(auto itr = m.begin() ; itr != m.end() ; itr++)
    	{
    		ll val = itr->second ;
    		ans += val*(val -1)/2;
    	}

    	cout<<ans<<endl;

    }
    return 0;
}
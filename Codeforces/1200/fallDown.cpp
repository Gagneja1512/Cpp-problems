/*
	There is a grid with n rows and m

columns, and three types of cells:

    An empty cell, denoted with '.'.
    A stone, denoted with '*'.
    An obstacle, denoted with the lowercase Latin letter 'o'. 

All stones fall down until they meet the floor (the bottom row), an obstacle, or other stone which is already immovable. (In other words, all the stones just fall down as long as they can fall.)

Simulate the process. What does the resulting grid look like?
Input

The input consists of multiple test cases. The first line contains an integer t
(1≤t≤100

) — the number of test cases. The description of the test cases follows.

The first line of each test case contains two integers n
and m (1≤n,m≤50

) — the number of rows and the number of columns in the grid, respectively.

Then n
lines follow, each containing m

characters. Each of these characters is either '.', '*', or 'o' — an empty cell, a stone, or an obstacle, respectively.
Output

For each test case, output a grid with n
rows and m columns, showing the result of the process.
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
    	ll n,m ; cin>>n>>m;

    	string s[n];
    	for(int i=0 ; i<n ; i++)
    		cin>>s[i];

    	for(int i=0 ; i<m ; i++)
    	{
    		ll mn_rock = n-1;
    		for(int j=n-1 ; j>=0 ; j--)
    		{
    			if(s[j][i] == 'o')
    				mn_rock = j-1;

    			if(s[j][i] == '*')
    			{
    				swap(s[j][i] , s[mn_rock][i]);
    				mn_rock-- ;
    			}
    		}
    	}

    	for(int i=0 ; i<n ; i++)
    		cout<<s[i]<<endl;

    	cout<<endl;
    }
    return 0;
}
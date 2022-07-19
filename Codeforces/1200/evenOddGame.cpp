/*
	
During their New Year holidays, Alice and Bob play the following game using an array a of n

integers:

    Players take turns, Alice moves first.
    Each turn a player chooses any element and removes it from the array.
    If Alice chooses even value, then she adds it to her score. If the chosen value is odd, Alice's score does not change.
    Similarly, if Bob chooses odd value, then he adds it to his score. If the chosen value is even, then Bob's score does not change. 

If there are no numbers left in the array, then the game ends. The player with the highest score wins. If the scores of the players are equal, then a draw is declared.

For example, if n=4
and a=[5,2,7,3]

, then the game could go as follows (there are other options):

    On the first move, Alice chooses 2

and get two points. Her score is now 2. The array a is now [5,7,3]
.
On the second move, Bob chooses 5
and get five points. His score is now 5. The array a is now [7,3]
.
On the third move, Alice chooses 7
and get no points. Her score is now 2. The array a is now [3]
.
On the last move, Bob chooses 3
and get three points. His score is now 8. The array a

    is empty now.
    Since Bob has more points at the end of the game, he is the winner. 

You want to find out who will win if both players play optimally. Note that there may be duplicate numbers in the array.
Input

The first line contains an integer t
(1≤t≤104) — the number of test cases. Then t

test cases follow.

The first line of each test case contains an integer n
(1≤n≤2⋅105) — the number of elements in the array a

.

The next line contains n
integers a1,a2,…,an (1≤ai≤109) — the array a

used to play the game.

It is guaranteed that the sum of n
over all test cases does not exceed 2⋅105

.
Output

For each test case, output on a separate line:

    "Alice" if Alice wins with the optimal play;
    "Bob" if Bob wins with the optimal play;
    "Tie", if a tie is declared during the optimal play. 
	
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

    	ll al = 0 , bb = 0;
    	sort(a.begin() , a.end() , [](ll a , ll b){return a>b;});

    	for(int i=0 ; i<n ; i++)
    	{
    		if(i%2 == 0 and a[i]%2 == 0)
    			al += a[i];

    		if(i%2 == 1 and a[i]%2 == 1)
    			bb += a[i];
    	}	

    	if(al > bb) cout<<"Alice"<<endl;
    	else if(al == bb) cout<<"Tie"<<endl;
    	else cout<<"Bob"<<endl;
    }
    return 0;
}
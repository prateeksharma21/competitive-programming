#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pf push_front
#define eb emplace_back
#define f(i,x,n) for(ll i=x;i<n;i++)
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define int ll
 
template < typename T > using indexed_set = tree < T, null_type, less < T >, rb_tree_tag, tree_order_statistics_node_update >;
template < typename T > using MinPriorityQueue = priority_queue < T, vector < T >, greater < T > >;

using ll = long long;
using db = double;
using pii = pair < int, int >;
using pll = pair < ll, ll >;
 
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
const int MOD = 1e9+7, INF = INT_MAX, N = 1e5 + 10;
 
void testcases();

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t = 1;
   cin >> t;
   while(t--) testcases();
   return 0;
}

void testcases(){
   int x,r,a,b;
   cin >> x >> r >> a >> b;
   if(a<b) swap(a,b);
   int ans = (x*(a-b))/a;
   if(x*(a-b)%a == 0) ans--;
   cout << ans << '\n';
   return;
}

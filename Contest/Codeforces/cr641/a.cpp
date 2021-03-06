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
   // cin >> t;
   while(t--) testcases();
   return 0;
}

void testcases(){
   int n;
   cin >> n;
   vector<int> A(n+1);
   f(i,1,n+1) cin >> A[i];
   int gc = A.back();
   int ans = 0;
   for(int i=n-1;i>=1;i--){
      int v = A[i]*gc/__gcd(A[i],gc);
      if(ans == 0) ans = v;
      else ans = __gcd(ans,v);
      gc = __gcd(gc,A[i]);
   }
   cout << ans << '\n';
   return;
}

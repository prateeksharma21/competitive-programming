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
 
int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   int a[n];
   f(i,0,n) cin >> a[i];
   sort(a,a+n);
   int ans = a[n-1];
   for(int i=n-2;i>=0;i--){
      ans = max(ans,a[i]*a[i+1]/__gcd(a[i],a[i+1]));
   }
   cout << ans << '\n';
   return 0;
}

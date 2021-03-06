#ifdef Prateek
  #include "\Prateek.h"
#else
  #include <bits/stdc++.h>
  using namespace std;
  #define debug(...) 42
#endif
#define F first
#define S second
#define pb push_back
#define int ll
#define f(i,x,n) for(int i=x;i<n;i++)
#define all(c) c.begin(),c.end()
using ll = long long;
const int MOD = 1e9+7, N = 1e5 + 10;

void test(){
   int p, q;
   cin >> p >> q;
   vector<int> ff;
   int x = q;
   for(int i = 2; i*i <= x; ++i) {
      if(x % i == 0) {
         ff.push_back(i);
         while(x%i == 0) {
            x /= i;
         }
      }
   }
   if(x > 1) {
      ff.push_back(x);
   }
   debug(ff);
   int ans = 0;
   for(int i : ff) {
      int c1 = 0, c2 = 0;
      int x = p;
      while(x % i == 0) {
         ++c1;
         x /= i;
      }
      x = q;
      while(x % i == 0) {
         ++c2;
         x /= i;
      }
      int rem = 0;
      while(c1 >= c2) {
         --c1;
         ++rem;
      }
      x = p;
      while(rem--) {
         x /= i;
      }
      ans = max(ans, x);
   }
   cout << ans << '\n';
   return;
}

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int tt = 1;
   cin >> tt;
   f(i,0,tt) test();   
   return 0;
}
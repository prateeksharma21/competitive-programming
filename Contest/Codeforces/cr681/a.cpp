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
   int n;
   cin >> n;
   vector<int> A(n);
   for(int i = 0; i < n; ++i) {
      cin >> A[i];
   }
   int l = A[0], r = 0;
   for(int i = 1; i < n; ++i) {
      int nr = A[i];
      int nl = 0;
      if(nr < r or nl > l) {
         cout << "NO\n";
         return;
      }
      int d = min(nr-r, l-nl);
      nl += d;
      nr -= d;
      l = nl, r = nr;
      debug(l, r);
   }
   cout << "YES\n";
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

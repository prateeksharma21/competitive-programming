#ifdef Prateek
  #include "C:\Prateek.h"
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
   int n,k;
   cin >> n >> k;
   vector<int> A(n);
   int mn = 1e9;
   for(int &i : A) {
      cin >> i;
   }
   sort(A.begin(), A.end());
   int ans = 0;
   for(int i = 1; i < n; ++i) {
      ans += (k-A[i]) / A[0];
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

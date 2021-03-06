#ifdef Prateek
  #include "Prateek.h"
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
   vector<int> cnt(32);
   for(int i = 0; i < n; ++i) {
      cin >> A[i];
      for(int j = 0; j < 32; ++j) {
         if((A[i] >> j) & 1){
            cnt[j]++;
         }
      }
   }
   sort(A.begin(),A.end(),greater<int>());
   int ans = 0;
   for(int i = 0; i < n; ++i){
      int mx = 0;
      for(int j = 0; j < 32; ++j){
         if((A[i] >> j) & 1) {
            mx = j;
            cnt[j]--;
         }
      }
      ans += cnt[mx];
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

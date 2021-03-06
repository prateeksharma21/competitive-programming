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
   vector<int> cnt(n+1), A(n);
   for (int  &i : A) {
      cin >> i;
      cnt[i]++;
   }
   int mn = -1;
   for (int i = 1; i <= n; ++i) {
      if (cnt[i] == 1) {
         mn = i;
         break;
      }
   }
   for (int i = 0; i < n; ++i) {
      if (mn == A[i]) {
         cout << i+1 << '\n';
         return;
      }
   }
   cout << "-1\n";
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
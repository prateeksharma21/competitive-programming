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
   int n, x;
   cin >> n >> x;
   if(n <= 2) {
      cout << "1\n";
      return;
   }
   int cur = 2;
   int apar = 3;
   while(true) {
      for(int i = 0; i < x; ++i) {
         apar++;
      }
      if(n < apar) {
         cout << cur << '\n';
         return;
      }
      ++cur;
   }
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

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
   string s;
   cin >> s;
   int n = s.length();
   map<char,int> cnt;
   for(auto &e : s) cnt[e]++;
   int mx = max({cnt['R'],cnt['P'],cnt['S']});
   if(mx == cnt['R']){
      cout << string(n,'P') << '\n';
   }else if(mx == cnt['P']){
      cout << string(n,'S') << '\n';
   }else{
      cout << string(n,'R') << '\n';
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

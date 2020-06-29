#include <bits/stdc++.h>
using namespace std;
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
   for(auto &e : A) cin >> e;
   int ans = 0;
   f(i,0,n){
      int mx = -MOD,mn = MOD;
      f(j,i,n){
         mx = max(mx,A[j]);
         mn = min(mn,A[j]);
         if(mx - mn == abs(A[j]-A[i])){
            ans++;
         }
      }
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
#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define int ll
#define f(i,x,n) for(int i=x;i<n;i++)
#define all(c) c.begin(),c.end()
using ll = long long;
using pii = pair<int,int>;
const int MOD = 1e9+7, N = 1e5 + 10;
 
void test(){
   int n,a,b;
   cin >> n >> a >> b;
   string res = "";
   f(i,0,b){
      res += i+'a';
   }
   f(i,b,a){
      res += b-1+'a';
   }
   string ans = "";
   while(ans.length()<n){
      ans += res;
   }
   f(i,0,n){
      cout << ans[i];
   }
   cout << '\n';
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

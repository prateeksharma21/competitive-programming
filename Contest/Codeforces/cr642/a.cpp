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
 
#ifdef HOME
   #include "/home/prateek2112/print.cpp"
#else
   #define debug(...) 21
#endif

void test(){
   int n,m;
   cin >> n >> m;
   if(n == 1){
      cout << "0\n";
   }else if(n == 2){
      cout << m << '\n';
   }else{
      cout << 2*m << '\n';
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

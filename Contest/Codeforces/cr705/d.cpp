#ifdef Prateek
  #include "Prateek.h"
#else
  #include <bits/stdc++.h>
  using namespace std;
  #define debug(...) 42
#endif
#define int ll
#define all(c) begin(c),end(c)
using ll = long long;
const int MOD = 1e9+7, N = 2e5 + 10; 

inline int add(int a, int b, int mod = MOD) {
  a += b; return a >= mod ? a - mod : a;
}
inline int sub(int a, int b, int mod = MOD) {
  a -= b; return a < 0 ? a + mod : a;
}
inline int mul(int a, int b, int mod = MOD) {
  return int((long long) a * b % mod);
}
inline int power(int base, long long ex, int mod = MOD) {
  int res = 1;
  for (; ex > 0; ex >>= 1) {
    if (ex & 1) res = mul(res, base, mod);
    base = mul(base, base, mod);
  }
  return res;
}
inline int inv(int a, int mod = MOD) {
  return power(a, mod - 2, mod);
}
inline int mdiv(int a, int b, int mod = MOD) {
  return mul(a, power(b, mod - 2,  mod));
}
inline void adds(int &a, int b, int mod = MOD) {
  a += b; if (a >= mod) a -= mod;
}
inline void subs(int &a, int b, int mod = MOD) {
  a -= b; if (a < 0) a += mod;
}
inline void muls(int &a, int b, int mod = MOD) {
  a = int((long long) a * b % mod);
}
inline void mdivs(int &a, int b, int mod = MOD) {
  a = mdiv(a, b, mod);
}
vector<int> fact,ifact;
void prep_fact(int mx = 1e6 + 40) {
  fact.assign(mx,0);
  ifact.assign(mx,0);
  fact[0] = 1;
  for (int i = 1; i < mx; ++i) fact[i] = mul(i, fact[i - 1]);
  ifact[mx - 1] = inv(fact[mx - 1]);
  for (int i = mx - 1; i > 0; --i) ifact[i - 1] = mul(i, ifact[i]);
}
inline int ncr(int n, int r) {
  if (n < r || r < 0 || n < 0) return 0;
  return mul(fact[n], mul(ifact[n - r], ifact[r]));
}

int spf[N];
set<int> F[N];
map<int, int> cnt[N];

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int c = 0;
   for (int i = 2; i < N; ++i) {
      if (spf[i] == 0) {
         spf[i] = i;
         ++c;
         for (int j = i * i; j < N; j += i) {
            if (!spf[j]) spf[j] = i;
         }
      }
   }

   auto get = [&](int x) {
      vector<int> r;
      while (spf[x]) {
         r.push_back(spf[x]);
         x /= spf[x];
      }
      return r;
   };

   int n, q;
   cin >> n >> q;
   vector<int> a(n);
   int gc = 0;
   for (int i = 0; i < n; ++i) {
      cin >> a[i];
      gc = gcd(gc, a[i]);
   }
   for (int i = 0; i < n; ++i) {
      a[i] /= gc;
      vector<int> fact = get(a[i]);
      for (int f : fact) {
         F[f].insert(i);
         cnt[i][f]++;
      }
   }
   auto apply = [&](int f) {
      for (int i = 0; i < n; ++i) {
         int c = --cnt[i][f];
         if (c == 0) {
            F[f].erase(i);
         }
      }
   };

   while (q--) {
      int i, x;
      cin >> i >> x;
      --i;
      vector<int> fact = get(x);
      for (int f : fact) {
         F[f].insert(i);
         cnt[i][f]++;
      }
      for (int f : fact) {
         if (F[f].size() == n) {
            muls(gc, f);
            apply(f);
         }
      }
      cout << gc << '\n';
   }
   return 0;
}
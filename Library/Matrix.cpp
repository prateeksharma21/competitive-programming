struct Matrix {
  static const int MOD = 1e9 + 7;
  static const long long SQMOD = (long long) MOD * MOD;
  static int const N = ;
  using T = int;
  T x[N][N];
  int n, m;
  Matrix(int _n = N, int _m = N, T val = 0): n(_n), m(_m) {
    for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j)
      x[i][j] = val;
  }
  Matrix(const vector<vector<int>> &&mat) {
    n = (int) mat.size();
    m = (int) mat[0].size();
    for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j)
      x[i][j] = mat[i][j];
  }
  Matrix& operator = (const vector<vector<int>> &&mat) {
    return *this = Matrix(forward<decltype(mat)>(mat));
  }
  T* operator [] (int r) {
    return x[r];
  }
  const T* operator [] (int r) const {
    return x[r];
  }
  static Matrix unit(int n) {
    Matrix res(n, n);
    for (int i = 0; i < n; i++) res[i][i] = 1;
    return res;
  }
  Matrix& operator += (const Matrix &rhs) {
    assert (n == rhs.n && m == rhs.m);
    for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) {
      x[i][j] += rhs[i][j];
      if (x[i][j] >= MOD) x[i][j] -= MOD;
    }
    return *this;
  }
  Matrix operator + (const Matrix &rhs) const {
    Matrix lhs(*this);
    return lhs += rhs;
  }
  friend Matrix operator * (const Matrix &A, const Matrix &B) {
    assert (A.m == B.n);
    Matrix res(A.n, B.m);
    for (int i = 0; i < res.n; i++) for (int j = 0; j < res.m; j++) {
      long long sum = 0LL;
      for (int k = 0; k < A.m; k++) {
        sum += (long long) A[i][k] * B[k][j];
        if (sum >= SQMOD) sum -= SQMOD;
      }
      res[i][j] = (int) (sum % MOD);
    }
    return res;
  }
  friend Matrix operator ^ (Matrix base, long long ex) {
    assert (base.n == base.m);
    Matrix res = Matrix::unit(base.n);
    while (ex > 0) {
      if (ex & 1) res = res * base;
      base = base * base;
      ex >>= 1;
    }
    return res;
  }
  Matrix& operator *= (const Matrix &rhs) {
    return *this = *this * rhs;
  }
  Matrix& operator ^= (const long long &ex) {
    return *this = *this ^ ex;
  }
  friend ostream &operator << (ostream &os, const Matrix& A) {
    os << "(" << A.n << " x " << A.m << ")" << endl;
    os << string(A.m * 2, '-');
    for (int i = 0; i < A.n; ++i) {
      os << endl;
      for (int j = 0; j < A.m; ++j) os << A[i][j] << ' ';
    }
    return os << endl << string(A.m * 2, '-');
  }
};

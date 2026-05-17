#include "bits/stdc++.h"
using namespace std;
using ll = long long; using ull = unsigned long long; using lll = __int128_t; using db = double; using ld = long double;
using pii = pair<int, int>; using pll = pair<ll, ll>;
template<class T, class U> istream& operator>>(istream& is, pair<T, U>& a) { return is >> a.first >> a.second; }
template<size_t I = 0, class... Ts> void read_tuple(istream& is, tuple<Ts...>& t) { if constexpr (I < sizeof...(Ts)) is >> get<I>(t), read_tuple<I + 1>(is, t); }
template<class... Ts> istream& operator>>(istream& is, tuple<Ts...>& t) { return read_tuple(is, t), is; }
template<class T> istream& operator>>(istream& is, vector<T>& a) { for (auto& x : a) is >> x; return is; }
template<class T, class U> bool cmin(T& x, const U& y) { return y < x ? (x = y, 1) : 0; }
template<class T, class U> bool cmax(T& x, const U& y) { return x < y ? (x = y, 1) : 0; }
istream& operator>>(istream& is, lll& x) { string s; is >> s; x = 0; for (char c : s) x = x * 10 + c - '0'; return is; }
ostream& operator<<(ostream& os, lll x) { if (x < 0) os << '-', x = -x; string s; do s += char('0' + x % 10), x /= 10; while (x); reverse(s.begin(), s.end()); return os << s; }
#if !defined(ONLINE_JUDGE)
#include "CP_Header/debug.h"
#else
#define dbg(...) ;
#endif
#define all(x) begin(x), end(x)
const int mod1 = 998244353, mod2 = 1e9 + 7;
#define MOD1
#ifdef MOD1
const int p = mod1; int fpow(ll x, ll y = mod1 - 2, int m = mod1) { int r = 1; for (; y; y >>= 1, x = (ll)x * x % m) if (y & 1) r = (ll)r * x % m; return r; }
#else
const int p = mod2; int fpow(ll x, ll y = mod2 - 2, int m = mod2) { int r = 1; for (; y; y >>= 1, x = (ll)x * x % m) if (y & 1) r = (ll)r * x % m; return r; }
#endif
// #define BINOM_ // Notice value of LIM !!
#ifdef BINOM_
const int LIM = 1e6 + 5;
namespace BINOM
{
    int fac[LIM], inv[LIM], Inv[LIM];
    void init()
    {
        fac[0] = fac[1] = inv[0] = inv[1] = Inv[0] = 1;
        for (int i = 2; i < LIM; ++i) fac[i] = (ll)fac[i - 1] * i % p, inv[i] = p - (ll)p / i * inv[p % i] % p;
        for (int i = 1; i < LIM; ++i) Inv[i] = (ll)Inv[i - 1] * inv[i] % p;
    }
    int C(int x, int y)
    {
        if (x < 0 || y < 0 || y > x) return 0;
        return (ll)fac[x] * Inv[y] % p * Inv[x - y] % p;
    }
    int _ = (init(), 0);
}
using BINOM::C; using BINOM::fac; using BINOM::inv; using BINOM::Inv;
#endif

void solve()
{

}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cout << fixed << setprecision(15);
    int T = 1;
    cin >> T;
    while (T--) solve();
}

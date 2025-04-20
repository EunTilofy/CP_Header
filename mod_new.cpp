#include "bits/stdc++.h"
using namespace std;
using ui = unsigned; using db = long double; using ll = long long; using ull = unsigned long long; using lll = __int128;
using pii = pair<int, int>; using pll = pair<ll, ll>;
template<class T1, class T2> istream& operator>>(istream& cin, pair<T1, T2>& a) { return cin >> a.first >> a.second; }
template <std::size_t Index = 0, typename... Ts> typename std::enable_if<Index == sizeof...(Ts), void>::type tuple_read(std::istream& is, std::tuple<Ts...>& t) { }
template <std::size_t Index = 0, typename... Ts> typename std::enable_if < Index < sizeof...(Ts), void>::type tuple_read(std::istream& is, std::tuple<Ts...>& t) { is >> std::get<Index>(t); tuple_read<Index + 1>(is, t); }
template <typename... Ts>std::istream& operator>>(std::istream& is, std::tuple<Ts...>& t) { tuple_read(is, t); return is; }
template<class T1> istream& operator>>(istream& cin, vector<T1>& a) { for (auto& x : a) cin >> x; return cin; }
template<class T1> istream& operator>>(istream& cin, valarray<T1>& a) { for (auto& x : a) cin >> x; return cin; }
template<class T1, class T2> bool cmin(T1& x, const T2& y) { if (y < x) { x = y; return 1; } return 0; }
template<class T1, class T2> bool cmax(T1& x, const T2& y) { if (x < y) { x = y; return 1; } return 0; }
istream& operator>>(istream& cin, lll& x) { x = 0; static string s; cin >> s; for (char c : s) x = x * 10 + (c - '0'); return cin; }
ostream& operator<<(ostream& cout, lll x) { static char s[60]; int tp = 1; s[0] = '0' + (x % 10); while (x /= 10) s[tp++] = '0' + (x % 10); while (tp--) cout << s[tp]; return cout; }
#if !defined(ONLINE_JUDGE)
#include "CP_Header/IO.h"
#include "CP_Header/defs.h"
#else
#define dbg(...) ;
#define dbgx(...) ;
#define dbg1(x) ;
#define dbg2(x) ;
#define dbg3(x) ;
#define DEBUG(msg) ;
#define REGISTER_OUTPUT_NAME(Type, ...) ;
#define REGISTER_OUTPUT(Type, ...) ;
#endif
#define all(x) (x).begin(),(x).end()
#define print(...) cout<<format(__VA_ARGS__)
#define err(...) cerr<<format(__VA_ARGS__)
const int mod1 = 998244353, mod2 = 1e9 + 7;
#define MOD1
#ifdef MOD1
const int p = mod1; int fpow(ll x, ll y = mod1 - 2, int m = mod1) { int r = 1; for (; y; y >>= 1, x = (ll)x * x % m)if (y & 1)r = (ll)r * x % m; return r; }
# else
const int p = mod2; int fpow(ll x, ll y = mod2 - 2, int m = mod2) { int r = 1; for (; y; y >>= 1, x = (ll)x * x % m)if (y & 1)r = (ll)r * x % m; return r; }
# endif
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
        if (x < 0 || y<0 || y>x) return 0;
        return (ll)fac[x] * Inv[y] % p * Inv[x - y] % p;
    }
    int _ = (init(), 0);
};
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
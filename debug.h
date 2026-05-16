#ifndef CP_HEADER_DEBUG_H
#define CP_HEADER_DEBUG_H

#include <bits/stdc++.h>

template<class T>std::string to_dbg(T x)
{
    enum { r = std::ranges::range<T>, p = requires { std::tuple_size<T>(); } };
    if constexpr (requires { std::cout << x; } && (!r || requires { std::string(x); }))
    {
        std::ostringstream o;
        o << x;
        return o.str();
    }
    else
    {
        std::string s;
        if constexpr (r)
            for (auto y : x) s += ", " + to_dbg(y);
        else if constexpr (p)
            std::apply([&](auto... y) { ((s += ", " + to_dbg(y)), ...); }, x);
        return (r ? "[" : "(") + s.substr(s.empty() ? 0 : 2) + (r ? "]" : ")");
    }
}

#define dbg(...) std::cerr << __LINE__ << ": (" #__VA_ARGS__ ") = " << to_dbg(std::tuple(__VA_ARGS__)) << "\n"

#endif

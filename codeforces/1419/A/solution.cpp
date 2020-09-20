#include <bits/stdc++.h>

using namespace std;

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << '{';
    string sep;
    for (const auto &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
template <typename T, size_t size>
ostream &operator<<(ostream &os, const array<T, size> &arr)
{
    os << '{';
    string sep;
    for (const auto &x : arr)
        os << sep << x, sep = ", ";
    return os << '}';
}
template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}

#define DEBUG
#ifdef DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    array<bool, 2> canWin{false, false};
    for (int i = 0; i < n; i++)
    {
        canWin[i % 2] |= (s[i] - '0') % 2 == (i + 1) % 2;
    }
    dbg(canWin);
    cout << (canWin[(n - 1) % 2] ? (n - 1) % 2 + 1 : (1 - (n - 1) % 2) + 1) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
#ifndef DEBUG
    cin.tie(nullptr);
#endif

    int t;
    cin >> t;
    for (int case_num = 0; case_num < t; case_num++)
    {
        solve();
    }
    return 0;
}

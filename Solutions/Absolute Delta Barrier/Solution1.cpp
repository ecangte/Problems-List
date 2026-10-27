#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll P = 1e9 + 7;

ll fpow(ll x, ll y) {
    if (y == 0) return 1;
    if (y % 2 == 1) return (x * fpow(x, y - 1)) % P;
    ll t = fpow(x, y / 2);
    return (t * t) % P; 
} 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "No\n";
        return 0;
    }

    ll s = (a + b + c) % P;
    ll ss = fpow(s, (a + b + c) % (P - 1));
    ll d = (fpow(s, (a + b) % (P - 1)) + fpow(s, (b + c) % (P - 1)) + fpow(s, (a + c) % (P - 1))) % P;
    ll ans = (ss * fpow(d, P - 2)) % P;
    
    cout << "Yes " << ans << '\n';
}
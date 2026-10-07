#include <bits/stdc++.h>
using namespace std;

struct Obj {
    int t, d;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Obj> v(n);

    for (auto& [t, d] : v) {
        cin >> t >> d;
    }

    sort(v.begin(), v.end(), [](Obj a, Obj b) { return b.d * a.t < a.d * b.t; });

    long long ptime = 0, sum = 0;
    for (const auto& [t, d] : v) {
        ptime += t;
        sum += d * ptime;
    }

    cout << sum << '\n';
}
#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    v.reserve(n);

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
        if (t == 1) break;
    }

    sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for (const auto& x : v) cout << x <<  ' ';
}
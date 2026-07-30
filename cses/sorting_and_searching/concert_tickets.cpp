#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sz(a) (ll)a.size()

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n, m;
    cin >> n >> m;

    set<array<ll, 2>> s;
    for(ll i = 0; i < n; i++) {
        ll a;
        cin >> a;

        s.insert({-a, i});
    }

    for(ll i = 0; i < m; i++) {
        ll a;
        cin >> a;

        auto it = s.lower_bound({-a, (ll)-1e12});
        if(it == s.end()) {
            cout << -1 << '\n';
            continue;
        }

        cout << -(*it)[0] << '\n';
        s.erase(it);
    }
}



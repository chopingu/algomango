#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sz(a) (ll)a.size()

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n), b(m);
    for (auto &i: a)
        cin >> i;

    for (auto &i: b)
        cin >> i;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans = 0;
    for (ll i = sz(a) - 1; i >= 0; i--) {
        while(sz(b) && a[i] + k < b.back()) 
            b.pop_back();

        if(sz(b) && a[i] - k <= b.back())
            ans++, b.pop_back();
    }

    cout << ans;
}

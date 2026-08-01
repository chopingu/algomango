#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
struct chash {
    const uint64_t C=ll(2e18*acos(0))+71;
    const int RANDOM=chrono::high_resolution_clock::now().time_since_epoch().count();
    ll operator()(ll x) const {
        return __builtin_bswap64((x^RANDOM)*C);
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n, x;
    cin >> n >> x;

    gp_hash_table<ll, ll, chash> mp;
    for(ll i = 0; i < n; i++) {
        ll a;
        cin >> a;

        if(mp.find(x - a) != mp.end()) {
            cout << mp[x - a] + 1 << ' ' << i + 1;
            return 0;
        }

        mp[a] = i;
    }

    cout << "IMPOSSIBLE";
}

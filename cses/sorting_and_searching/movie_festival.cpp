#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin >> n;

    vector<array<ll, 2>> m(n);
    for(auto &[b, a]: m) 
        cin >> a >> b;

    sort(m.begin(), m.end());

    ll ans = 0, last = 0;
    for(auto [b, a]: m)
        (a >= last) ? ans++, last = b : true ;

    cout << ans;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sz(a) (ll)a.size()

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n, x;
    cin >> n >> x;

    deque<ll> dq(n);
    for(auto &i: dq)
        cin >> i;

    sort(dq.begin(), dq.end());

    ll ans = 0;
    while(sz(dq)) {
        ans++;
        if(sz(dq)^1) {
            if(dq.back() + dq.front() <= x) {
                dq.pop_back();
                dq.pop_front();
                continue;
            }
            dq.pop_back();
            continue;
        }

        dq.pop_back();
    }

    cout << ans;
}

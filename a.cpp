#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A. Select Three Sticks

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int ans = 1e9 + 10;
    for(int i = 3; i <= n; i++) {
        ans = min(ans, a[i] - a[i-2]);
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}

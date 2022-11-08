#include<bits/stdc++.h>
using namespace std;

#define ll long long

// C. Removing Smallest Multiple 

void solve() {
    string t;
    int n;
    cin >> n >> t;
    vector<bool> a(n + 1);

    for(int i = 1; i <= n; i++) {
        a[i] = (t[i - 1] == '1');
    }

    vector<int> cost(n + 1);
    for(int i = n; i >= 1; i--) {
        for(int j = i; j <= n; j += i) {
            if(a[j]) break;
            cost[j] = i;
        }
    }

    long long ans = 0;
    for(int i = 1; i <= n; i++) {
        if(!a[i]) ans += cost[i];
    }

    cout << ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}

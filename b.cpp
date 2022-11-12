#include<bits/stdc++.h>
using namespace std;

#define ll long long

// B. Bright, Nice, Brilliant

void solve() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if(j == 1 or j == i) 
                cout << "1 ";
            else 
                cout << "0 ";
        }
        cout << "\n";
    }
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

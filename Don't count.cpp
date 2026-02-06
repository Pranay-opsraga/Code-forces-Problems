#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int cnt = 0;

        // Step 1: grow x until it can possibly contain s
        while (x.size() < s.size()) {
            x += x;
            cnt++;
        }

        // Step 2: check
        if (x.find(s) != string::npos) {
            cout << cnt << '\n';
            continue;
        }

        // Step 3: one more doubling for cross-boundary match
        x += x;
        cnt++;

        if (x.find(s) != string::npos) {
            cout << cnt << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}

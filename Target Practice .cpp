#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast

    int t;
    cin >> t;

    while (t--) {
        vector<string> grid(10);

        for (int i = 0; i < 10; i++) {
            cin >> grid[i];
        }

        int points = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {

                if (grid[i][j] == 'X') {

                    int ring = min({i + 1, j + 1, 10 - i, 10 - j});
                    points += ring;
                }
            }
        }

        cout << points << endl;
    }

    return 0;
}

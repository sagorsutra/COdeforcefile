#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<long long> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long max1 = LLONG_MIN, max2 = LLONG_MIN;
        long long min1 = LLONG_MAX, min2 = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            if (v[i] > max1) {
                max2 = max1;
                max1 = v[i];
            } else if (v[i] > max2) {
                max2 = v[i];
            }

            if (v[i] < min1) {
                min2 = min1;
                min1 = v[i];
            } else if (v[i] < min2) {
                min2 = v[i];
            }
        }

        long long maxprod1 = max1 * max2;
        long long maxprod2 = min1 * min2;
        long long maxprod = max(maxprod1, maxprod2);

        cout << maxprod << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int needed_time = 240 - k;
    int total_time = 0, challenges = 0;

    for (int i = 1; i <= n; i++) {
        total_time += 5 * i;
        if (total_time > needed_time)
            break;
        challenges++;
    }

    cout << challenges << endl;
    return 0;
}

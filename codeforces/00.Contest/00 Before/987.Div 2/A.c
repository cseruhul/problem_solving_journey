#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int h[n], freq[n + 1]; 
        for (int i = 0; i <= n; i++) {
            freq[i] = 0; 
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &h[i]);
            freq[h[i]]++;
        }

        int max_freq = 0;
        for (int i = 1; i <= n; i++) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
            }
        }

        printf("%d\n", n - max_freq);
    }

    return 0;
}

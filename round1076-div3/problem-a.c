#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, s, x;
        scanf("%d %d %d", &n, &s, &x);

        int sum = 0;
        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            sum += a;
        }

        if (sum > s) {
            printf("NO\n");
        } else if ((s - sum) % x == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

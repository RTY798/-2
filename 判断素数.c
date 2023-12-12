
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    scanf_s("%d", &N);
    for (int i = 0; i < N; i++) {
        int num;
        scanf_s("%d", &num);
        if (is_prime(num)) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}

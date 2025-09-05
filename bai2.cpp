#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    bool *prime = malloc((n+1) * sizeof(bool));
    for (int i = 0; i <= n; i++) prime[i] = true;

    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) sum += i;
    }

    printf("Tong cac so nguyen to <= %d la: %d\n", n, sum);

    free(prime);
    printf("hai cute");
    return 0;
}

